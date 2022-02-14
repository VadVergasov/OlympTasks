// Main code for this task.
// Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
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
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

class Worker {
   public:
    wstring name, surname, patronymic;
    double rate_per_hour;
    int hours, id;

   public:
    Worker(wstring &name, wstring &surname, wstring &patronymic,
           double rate_per_hour, int hours, int id) {
        this->name = name;
        this->surname = surname;
        this->patronymic = patronymic;
        this->rate_per_hour = rate_per_hour;
        this->hours = hours;
        this->id = id;
    }
    Worker() {}

    double getSalary() const { return hours * rate_per_hour; }

    bool operator<(Worker b) const { return getSalary() < b.getSalary(); }

    bool operator>(Worker b) const { return getSalary() > b.getSalary(); }

    bool empty() const {
        if (name == L"0" && surname == L"0" && patronymic == L"0" &&
            rate_per_hour == 0 && hours == 0 && id == 0) {
            return true;
        }
        return false;
    }

    tuple<wstring, wstring, wstring, double, int, int> getTuple() const {
        return tuple<wstring, wstring, wstring, double, int, int>(
            name, surname, patronymic, rate_per_hour, hours, id);
    }
};

void clear_input(wistream &in) {
    in.clear();
    in.ignore(numeric_limits<streamsize>::max(), '\n');
}

wistream &operator>>(wistream &in, Worker &w) {
    wcout << L"Введите следующего работника (Имя Фамилия Отчество "
             L"ОплатаВЧас Часы Номер): ";
    wstring a, b, c;
    double d;
    int hours, id;
    while (!(in >> a >> b >> c >> d >> hours >> id)) {
        clear_input(in);
        wcout << L"Повторите ввод:\n";
    }
    clear_input(in);
    w = Worker(a, b, c, d, hours, id);
    return in;
}

wostream &operator<<(wostream &out, Worker &w) {
    out << w.name << " " << w.surname << " " << w.patronymic << " "
        << w.rate_per_hour << " " << w.hours << " " << w.id << endl;
    return out;
}

void sort_workers(vector<Worker> &list) {
    bool edited = true;
    while (edited) {
        edited = false;
        for (int i = 0; i < static_cast<int>(list.size()) - 1; i++) {
            if (list[i] > list[i + 1]) {
                edited = true;
                swap(list[i], list[i + 1]);
            }
        }
    }
}

vector<int> search(vector<Worker> &list,
                   tuple<wstring, wstring, wstring, double, int, int> temp,
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
                if (get<4>(list[i].getTuple()) == get<4>(temp)) {
                    res.push_back(i);
                }
                break;
            case 5:
                if (get<5>(list[i].getTuple()) == get<5>(temp)) {
                    res.push_back(i);
                }
                break;
        }
    }
    return res;
}

vector<int> get_and_search(vector<Worker> &list, wstring request) {
    wcout << request;
    int n;
    while (!(wcin >> n) || n < 0 || n > 5) {
        clear_input(wcin);
        wcout << L"Повторите ввод: ";
    }
    clear_input(wcin);
    wcout << L"Введите значение поля: ";
    tuple<wstring, wstring, wstring, double, int, int> temp;
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
            get<4>(temp) = d;
            break;
        }
        case 5: {
            int d;
            while (!(wcin >> d)) {
                clear_input(wcin);
                wcout << L"Повторите ввод: ";
            }
            clear_input(wcin);
            get<5>(temp) = d;
            break;
        }
    }
    return search(list, temp, n);
}

void erase(vector<Worker> &list) {
    int num = 0;
    vector<int> result =
        get_and_search(list,
                       L"Введите номер поля (0 - имя, 1 - фамилия, 2 - "
                       L"отчество, 3 - оплата за час, 4 - часы работы, 5 - "
                       L"табельный номер), по которому искать и удалить: ");
    for (auto index : result) {
        list.erase(list.begin() + index - num);
        num++;
    }
}

void print(vector<Worker> &list) {
    wcout << L"Укажите тип вывода: -3 - все по возрастанию зарплаты, -2 - все, "
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
            vector<Worker> sorted = list;
            sort_workers(sorted);
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
            vector<int> result = get_and_search(
                list,
                L"Введите номер поля (0 - имя, 1 - фамилия, 2 - "
                L"отчество, 3 - оплата за час, 4 - часы работы, 5 - "
                L"табельный номер), по которому искать и выводить: ");
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

void edit(vector<Worker> &list) {
    vector<int> result = get_and_search(
        list,
        L"Введите номер поля (0 - имя, 1 - фамилия, 2 - "
        L"отчество, 3 - оплата за час, 4 - часы работы, 5 - "
        L"табельный номер), по которому искать и редактировать: ");
    wcout << L"Изменить все найденные элементы (-1) или конкретный (0 и более "
             L"по индексу):";
    int n;
    while (!(wcin >> n) || n < -1 || n >= static_cast<int>(result.size())) {
        clear_input(wcin);
        wcout << L"Повторите ввод: ";
    }
    clear_input(wcin);
    Worker nw;
    wcin >> nw;
    if (n == -1) {
        for (auto i : result) {
            list[i] = nw;
        }
    } else {
        list[result[n]] = nw;
    }
}

void dialog(vector<Worker> &list) {
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
                Worker t;
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

void fixed_number(vector<Worker> &list) {
    int n;
    wcout << L"Введите количество элементов: ";
    while (!(cin >> n) || n < 1) {
        clear_input(wcin);
    }
    clear_input(wcin);
    list.resize(n);
    for (int i = 0; i < n; i++) {
        wcin >> list[i];
    }
}

void until_0(vector<Worker> &list) {
    do {
        Worker t;
        wcin >> t;
        list.push_back(t);
    } while (!list.back().empty());
}

//Пример для ввода фиксированного количества:
/*
5
Test1 Tests1 Testest1 10.5 23 1
Test2 Tests2 Testest2 1123.5 10 3
Test3 Tests3 Testest3 0.5 123 5
Test4 Tests4 Testest4 23.5 40 2
Test1 Tests1 Testest1 10 12 4
*/

// Variant 6
int main() {
    setlocale(LC_ALL, "");
    wcout
        << L"Как вы хотите ввести значения: 1. Заранее заданное количество, 2. "
           L"До того, как введете 0 0 0 0 0 0, 3. Диалог 1 - продолжить, 0 - "
           L"прекратить?\n";
    int t;
    while (!(wcin >> t) || t < 1 || t > 3) {
        clear_input(wcin);
        wcout << L"Повторите ввод: ";
    }
    vector<Worker> list;
    clear_input(wcin);
    switch (t) {
        case 1: {
            fixed_number(list);
            break;
        }
        case 2: {
            until_0(list);
            break;
        }
    }
    dialog(list);
    return 0;
}
