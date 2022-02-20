// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include <cstdlib>
#include <ctime>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <fstream>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace __gnu_pbds;

typedef ordered tree;

using namespace std;

class Graph {
   private:
    int vertices, edges;  //Количество вершин и ребер
    vector<vector<bool> > matrix;  //Матрица смежности

   public:
    Graph() {  // Инициализируем по количеству вершин и ребер
        cout << "Введите количество вершин и ребер: ";
        cin >> vertices >> edges;
        matrix = vector<vector<bool> >(vertices, vector<bool>(vertices, false));
        int count_of_added_edges = 0;
        for (int i = 0; i < vertices && edges > count_of_added_edges;
             i++) {  //Заполняем, считая сколько поставили ребер, чтобы если что
                     //прекратить
            for (int j = i + 1; j < vertices && edges > count_of_added_edges;
                 j++) {  // От i+1, чтобы не было петель
                         // (само в себя) и чтобы не
                         // перезаписывать ребра, т.к. граф
                         // неориентированный, то каждое
                         // ребро один раз генерируем.
                bool val = rand() % 2;  //Есть ребро или нет
                matrix[i][j] = val;     //Ребро из А в Б
                matrix[j][i] = val;     //Ребро из Б в А
                if (val) {  //Если ребро есть, то добавляем его в количество
                            //вставленных
                    count_of_added_edges++;
                }
            }
        }
    }

    void WriteToFile(
        const string &filename) {  // Пишем в файл с именем
                                   // filename сначала количество
                                   // вершин, ребер и потом матрица смежности
        ofstream fout(filename);
        fout << vertices << " " << edges << endl;
        for (auto i : matrix) {
            for (auto j : i) {
                fout << j << " ";
            }
            fout << endl;
        }
    }

    void ReadFromFile(const string &filename) {  //Читаем аналогично записи
        ifstream fin(filename);
        fin >> vertices >> edges;
        matrix = vector<vector<bool> >(vertices, vector<bool>(vertices, false));
        bool tmp;
        for (int i = 0; i < vertices; i++) {
            for (int j = 0; j < vertices; j++) {
                fin >> tmp;
                matrix[i][j] =
                    tmp;  // vector<bool> нельзя вводить, только присваивать.
                          // Особенность именно vector<bool>
            }
        }
    }

    void insertVertex() {  //Добавляем вершину
        vertices++;
        matrix.push_back(vector<bool>(
            vertices, false));  //Добавляем внизу строку смежности вершины
        bool tmp;
        for (int i = 0; i < vertices - 1; i++) {
            cout << "Смежна ли вершина с " << i + 1 << "-ой вершиной: ";
            cin >> tmp;
            matrix[vertices - 1][i] =
                tmp;  //Добавляем внизу информацию о смежности
            matrix[i].push_back(
                tmp);  //Добавляем в правом столбце информацию о смежности
        }
    }

    vector<vector<bool> > getMatrix() { return matrix; }
};

vector<vector<bool> > matrix_to_incident(
    vector<vector<bool> > matrix) {  //Матрицу смежности в инцидентности
    queue<pair<int, int> > q;  // Очередь ребер, где храним, что она связывает.
    for (int i = 0; i < (int)matrix.size(); i++) {
        for (int j = i + 1; j < (int)matrix.size();
             j++) {  // От i+1 чтобы не повторялись ребра
            if (matrix[i][j]) {
                q.push({i, j});
            }
        }
    }
    vector<vector<bool> > res(matrix.size(), vector<bool>(q.size(), false));
    int cur = 0;
    while (!q.empty()) {
        res[q.front().first][cur] =
            true;  // Второй индекс это столбец, так что он равен номеру ребра
        res[q.front().second][cur] = true;
        q.pop();
        cur++;
    }
    return res;
}

vector<vector<bool> > readMatrix() {
    int vertices;
    cout << "Введите количество вершин (строк/столбцов в матрице): ";
    cin >> vertices;
    vector<vector<bool> > matrix;
    cout << "Введите матрицу: " << endl;
    bool tmp;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cin >> tmp;
            matrix[i][j] = tmp;  // vector<bool> нельзя вводить, только
                                 // присваивать. Особенность именно vector<bool>
        }
    }
    return matrix;
}

int main() {
    ` srand(time(NULL));
    Graph graph;
    graph.WriteToFile("start.txt");
    vector<vector<bool> > inc = matrix_to_incident(
        graph.getMatrix());  // Получаем матрицу инцидентности для графа
    for (auto i : inc) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    graph.insertVertex();
    graph.WriteToFile("end.txt");
    return 0;
}
