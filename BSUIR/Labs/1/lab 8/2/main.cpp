// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
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
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

wifstream infile("input.txt");
wofstream outfile("output.txt");

class Student {
   public:
    wstring name, surname, patronymic, addres;
    vector<unsigned short> marks;
    int number;

   public:
    Student(wstring &name, wstring &surname, wstring &patronymic,
            wstring addres, vector<unsigned short> marks, int number) {
        this->name = name;
        this->surname = surname;
        this->patronymic = patronymic;
        this->addres = addres;
        this->marks = marks;
        this->number = number;
    }
    Student() {}

    double avarageMark() const {
        double sum = 0;
        for (auto i : marks) {
            sum += i;
        }
        return sum / static_cast<double>(number);
    }

    bool operator<(Student b) const { return avarageMark() < b.avarageMark(); }

    bool operator>(Student b) const { return avarageMark() > b.avarageMark(); }

    tuple<wstring, wstring, wstring, wstring, vector<unsigned short>, int>
    getTuple() const {
        return tuple<wstring, wstring, wstring, wstring, vector<unsigned short>,
                     int>(name, surname, patronymic, addres, marks, number);
    }
};

void clear_input(wistream &in) {
    in.clear();
    in.ignore(numeric_limits<streamsize>::max(), '\n');
}

wifstream &operator>>(wifstream &in, Student &w) {
    wstring a, b, c, d;
    int number;
    in >> a >> b >> c >> d >> number;
    vector<unsigned short> marks(number);
    for (auto &i : marks) {
        in >> i;
    }
    w = Student(a, b, c, d, marks, number);
    return in;
}

wistream &operator>>(wistream &in, Student &w) {
    wcout << L"Введите следующего студента (Имя Фамилия Отчество "
             L"Адрес(город) КоличествоОценок): ";
    wstring a, b, c, d;
    int number;
    while (!(in >> a >> b >> c >> d >> number)) {
        clear_input(in);
        wcout << L"Повторите ввод:\n";
    }
    clear_input(in);
    vector<unsigned short> marks(number);
    wcout << L"Введите оценки: ";
    for (auto &i : marks) {
        while (!(in >> i) || i < 0 || i > 10) {
            clear_input(in);
            wcout << L"Повторите ввод: ";
        }
        clear_input(in);
    }
    w = Student(a, b, c, d, marks, number);
    return in;
}

wostream &operator<<(wostream &out, Student &w) {
    out << w.name << " " << w.surname << " " << w.patronymic << " " << w.addres
        << " " << w.number << endl;
    for (auto i : w.marks) {
        out << i << " ";
    }
    out << endl;
    return out;
}

void sort_students(vector<Student> &list) { sort(list.begin(), list.end()); }

vector<int> search(
    vector<Student> &list,
    tuple<wstring, wstring, wstring, wstring, vector<unsigned short>, int> temp,
    int index_of_field) {
    vector<int> res;
    for (int i = 0; i < static_cast<int>(list.size()); i++) {
        switch (index_of_field) {
            case 0:
                if (get<0>(list[i].getTuple()) == get<0>(temp)) {
                    res.push_back(i);
                }
                break;
            case 1:
                if (get<1>(list[i].getTuple()) == get<1>(temp)) {
                    res.push_back(i);
                }
                break;
            case 2:
                if (get<2>(list[i].getTuple()) == get<2>(temp)) {
                    res.push_back(i);
                }
                break;
            case 3:
                if (get<3>(list[i].getTuple()) == get<3>(temp)) {
                    res.push_back(i);
                }
                break;
            case 4:
                if (get<4>(list[i].getTuple()) == get<4>(temp) &&
                    get<5>(list[i].getTuple()) == get<5>(temp)) {
                    res.push_back(i);
                }
                break;
        }
    }
    return res;
}

vector<int> get_and_search(vector<Student> &list, wstring request) {
    wcout << request;
    int n;
    while (!(wcin >> n) || n < 0 || n > 5) {
        clear_input(wcin);
        wcout << L"Повторите ввод: ";
    }
    clear_input(wcin);
    wcout << L"Введите значение поля: ";
    tuple<wstring, wstring, wstring, wstring, vector<unsigned short>, int> temp;
    switch (n) {
        case 0: {
            wstring s;
            wcin >> s;
            get<0>(temp) = s;
            break;
        }
        case 1: {
            wstring s;
            wcin >> s;
            get<1>(temp) = s;
            break;
        }
        case 2: {
            wstring s;
            wcin >> s;
            get<2>(temp) = s;
            break;
        }
        case 3: {
            double d;
            while (!(wcin >> d)) {
                clear_input(wcin);
                wcout << L"Повторите ввод: ";
            }
            clear_input(wcin);
            get<3>(temp) = d;
            break;
        }
        case 4: {
            int d;
            while (!(wcin >> d)) {
                clear_input(wcin);
                wcout << L"Повторите ввод: ";
            }
            clear_input(wcin);
            vector<unsigned short> marks(d);
            for (auto &i : marks) {
                while (!(wcin >> i) || i < 0 || i > 10) {
                    clear_input(wcin);
                    wcout << L"Повторите ввод: ";
                }
                clear_input(wcin);
            }
            get<4>(temp) = marks;
            get<5>(temp) = d;
            break;
        }
    }
    return search(list, temp, n);
}

void erase(vector<Student> &list) {
    int num = 0;
    vector<int> result = get_and_search(
        list,
        L"Введите номер поля (0 - имя, 1 - фамилия, 2 - "
        L"отчество, 3 - адрес, 4 - оценки (количество и потом сами оценки) "
        L", по которому искать и удалить: ");
    for (auto index : result) {
        list.erase(list.begin() + index - num);
        num++;
    }
}

void print(vector<Student> &list) {
    wcout << L"Укажите тип вывода: -3 - все по возрастанию оценок, -2 - все, "
             L"-1 - по параметру, больше либо равно нуля выведет по номеру в "
             L"массиве: ";
    int n;
    while (!(wcin >> n) || n < -3 || n >= static_cast<int>(list.size())) {
        clear_input(wcin);
        wcout << L"Повторите ввод: ";
    }
    clear_input(wcin);
    switch (n) {
        case -3: {
            vector<Student> sorted = list;
            sort_students(sorted);
            for (auto i : sorted) {
                wcout << i;
            }
            break;
        }
        case -2: {
            for (auto i : list) {
                wcout << i;
            }
            break;
        }
        case -1: {
            vector<int> result =
                get_and_search(list,
                               L"Введите номер поля (0 - имя, 1 - фамилия, 2 - "
                               L"отчество, 3 - адрес, 4 - оценки"
                               L", по которому искать и выводить: ");
            for (auto index : result) {
                wcout << list[index];
            }
            break;
        }
        default: {
            wcout << list[n];
            break;
        }
    }
}

void edit(vector<Student> &list) {
    vector<int> result =
        get_and_search(list,
                       L"Введите номер поля (0 - имя, 1 - фамилия, 2 - "
                       L"отчество, 3 - адрес, 4 - оценки"
                       L", по которому искать и редактировать: ");
    wcout << L"Изменить все найденные элементы (-1) или конкретный (0 и более "
             L"по индексу):";
    int n;
    while (!(wcin >> n) || n < -1 || n >= static_cast<int>(result.size())) {
        clear_input(wcin);
        wcout << L"Повторите ввод: ";
    }
    clear_input(wcin);
    Student nw;
    wcin >> nw;
    if (n == -1) {
        for (auto i : result) {
            list[i] = nw;
        }
    } else {
        list[result[n]] = nw;
    }
}

void dialog(vector<Student> &list) {
    int t = 1;
    while (t) {
        wcout << L"Продолжить? (1 0)\n";
        while (!(wcin >> t) || t < 0 || t > 2) {
            clear_input(wcin);
            wcout << L"Повторите ввод\n";
        }
        clear_input(wcin);
        if (!t) {
            break;
        }
        wcout << L"Введите тип операции (1 - добавить, 2 - удалить, 3 - "
                 L"вывести, 4 - изменить)";
        int d;
        while (!(wcin >> d) || d < 1 || d > 4) {
            clear_input(wcin);
            wcout << L"Повторите ввод\n";
        }
        clear_input(wcin);
        switch (d) {
            case 1: {
                Student t;
                wcin >> t;
                list.push_back(t);
                break;
            }
            case 2:
                erase(list);
                break;
            case 3:
                print(list);
                break;
            case 4:
                edit(list);
                break;
        }
    }
}

void until_end(vector<Student> &list) {
    while (!infile.eof()) {
        Student t;
        infile >> t;
        list.push_back(t);
    }
    list.pop_back();  //Удаляем последний элемент, т.к. он будет пустым
}

//Пример файла input.txt:
/*
Test1 Tests1 Testest1 Minsk 3
1 2 3
Test2 Tests2 Testest2 Vitebsk 2
9 10
Test4 Tests4 Testest4 Minsk 3
7 8 9
Test3 Tests3 Testest3 Minsk 4
4 4 5 5
*/

// Variant 6
int main() {
    setlocale(LC_ALL, "");
    vector<Student> list;
    until_end(list);
    dialog(list);
    tuple<wstring, wstring, wstring, wstring, vector<unsigned short>, int> temp;
    get<3>(temp) = L"Minsk";
    vector<int> res = search(list, temp, 3);
    vector<wstring> surnames;
    for (auto i : res) {
        if (list[i].avarageMark() >= 4.5) {
            surnames.push_back(list[i].surname);
        }
    }
    sort(surnames.begin(), surnames.end());
    for (auto i : surnames) {
        outfile << i << endl;
    }
    outfile.close();
    infile.close();
    return 0;
}
