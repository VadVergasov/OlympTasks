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
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class HashTable {
   private:
    int size, count;
    vector<stack<int> > table;

   public:
    HashTable(int sz) {
        size = sz;
        count = 0;
        table = vector<stack<int> >(sz);
    }

    void insert(int element) {
        count++;
        table[element % size].push(element);
    }

    int get_number_of_min() {
        int mn = INT32_MAX, pos = -1;
        for (int i = 0; i < size; i++) {
            stack<int> tmp;
            while (!table[i]
                        .empty()) {  // Перекладывает стек в ячейке во
                                     // временный стек,
                                     // чтобы просмотреть все значения в таблице
                tmp.push(table[i].top());
                if (mn >
                    table[i].top()) {  // Если нашли меньше - обновляем резутат
                    mn = table[i].top();
                    pos = i;
                }
                table[i].pop();
            }
            while (!tmp.empty()) {  // Делаем обратное действие, чтобы сохранить
                                    // таблицу в начальном виде
                table[i].push(tmp.top());
                tmp.pop();
            }
        }
        return pos;
    }
};

void fillTable(HashTable &hash_table) {
    int cnt = rand() % 1000 + 1000;  //Количество элементов от 1000 до 1999
    while (cnt--) {
        hash_table.insert(rand() % (INT32_MAX - 10) +
                          10);  //Рандомное число от 10 до 2^31-11
    }
}

int main() {
    srand(time(NULL));
    int n;
    cout << "Введите размер таблицы: ";
    cin >> n;
    HashTable hash_table(n);
    fillTable(hash_table);
    cout << hash_table.get_number_of_min() << endl;
    return 0;
}
