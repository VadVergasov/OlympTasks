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
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

wfstream infile("input.txt", ios::in | ios::out);
wofstream outfile("output.txt");

class Book {
   public:
    wstring name, author, publishing_house;
    int id, number_of_lists, year;

   public:
    Book(wstring &name, wstring &author, wstring &publishing_house, int id,
         int number_of_lists, int year) {
        this->name = name;
        this->author = author;
        this->publishing_house = publishing_house;
        this->id = id;
        this->number_of_lists = number_of_lists;
        this->year = year;
    }
    Book() {}

    bool operator<(Book b) const { return year < b.year; }

    bool operator>(Book b) const { return year > b.year; }

    bool operator==(Book b) const {
        return (name == b.name) && (author == b.author) &&
               (publishing_house == b.publishing_house) && (id == b.id) &&
               (number_of_lists == b.number_of_lists) && (year == b.year);
    }

    wstring toString() const {
        return name + L" " + author + L" " + publishing_house + L" " +
               to_wstring(id) + L" " + to_wstring(number_of_lists) + L" " +
               to_wstring(year);
    }

    tuple<wstring, wstring, wstring, int, int, int> getTuple() const {
        return tuple<wstring, wstring, wstring, int, int, int>(
            name, author, publishing_house, id, number_of_lists, year);
    }
};

void clear_input(wistream &in) {
    in.clear();
    in.ignore(numeric_limits<streamsize>::max(), '\n');
}

wfstream &operator>>(wfstream &in, Book &w) {
    wstring a, b, c;
    int id, year, number;
    in >> a >> b >> c >> id >> number >> year;
    w = Book(a, b, c, id, number, year);
    return in;
}

wfstream &operator<<(wfstream &out, Book &w) {
    out.clear();  // Очищаем состояние потока, т.к. он выставит eof и fail т.к.
                  // мы ввели пустое значение ранее
    out.seekp(0, ios::end);  // Ставим указатель печати в конец файла
    out << w.name << " " << w.author << " " << w.publishing_house << " " << w.id
        << " " << w.number_of_lists << " " << w.year << endl;
    return out;
}

wistream &operator>>(wistream &in, Book &w) {
    wcout << L"Введите следующую книгу (Название Автор Издательство "
             L"Номер КоличествоСтраниц Год: ";
    wstring a, b, c;
    int id, year, number;
    while (!(in >> a >> b >> c >> id >> number >> year)) {
        clear_input(in);
        wcout << L"Повторите ввод:\n";
    }
    clear_input(in);
    w = Book(a, b, c, id, number, year);
    return in;
}

wostream &operator<<(wostream &out, Book &w) {
    out << w.name << " " << w.author << " " << w.publishing_house << " " << w.id
        << " " << w.number_of_lists << " " << w.year << endl;
    return out;
}

void sort_books(vector<Book> &list) { sort(list.begin(), list.end()); }

vector<int> search(vector<Book> &list,
                   tuple<wstring, wstring, wstring, int, int, int> temp,
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

vector<int> get_and_search(vector<Book> &list, wstring request) {
    wcout << request;
    int n;
    while (!(wcin >> n) || n < 0 || n > 5) {
        clear_input(wcin);
        wcout << L"Повторите ввод: ";
    }
    clear_input(wcin);
    wcout << L"Введите значение поля: ";
    tuple<wstring, wstring, wstring, int, int, int> temp;
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

void erase(vector<Book> &list) {
    int num = 0;
    vector<int> result =
        get_and_search(list,
                       L"Введите номер поля (0 - название, 1 - автор, 2 - "
                       L"издательство, 3 - номер, 4 - количество листов, 5 - "
                       L"год издания, по которому искать и удалить: ");
    for (auto index : result) {
        list.erase(list.begin() + index - num);
        num++;
    }
}

void print(vector<Book> &list) {
    wcout << L"Укажите тип вывода: -3 - все по возрастанию года издания, -2 - "
             L"все, -1 - по параметру, больше либо равно нуля выведет по "
             L"номеру в массиве: ";
    int n;
    while (!(wcin >> n) || n < -3 || n >= static_cast<int>(list.size())) {
        clear_input(wcin);
        wcout << L"Повторите ввод: ";
    }
    clear_input(wcin);
    switch (n) {
        case -3: {
            vector<Book> sorted = list;
            sort_books(sorted);
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
                L"Введите номер поля (0 - название, 1 - автор, 2 - "
                L"издательство, 3 - номер, 4 - количество листов, 5 - "
                L"год издания, по которому искать и выводить: ");
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

void edit(vector<Book> &list) {
    vector<int> result =
        get_and_search(list,
                       L"Введите номер поля (0 - название, 1 - автор, 2 - "
                       L"издательство, 3 - номер, 4 - количество листов, 5 - "
                       L"год издания, по которому искать и редактировать: ");
    wcout << L"Изменить конкретный (0 и более по индексу):";
    int n;
    while (!(wcin >> n) || n < -1 || n >= static_cast<int>(result.size())) {
        clear_input(wcin);
        wcout << L"Повторите ввод: ";
    }
    clear_input(wcin);
    Book nw;
    wcin >> nw;
    infile.clear();  // Очищаем состояние потока, т.к. он выставит eof и fail
                     // т.к. мы ввели пустое значение ранее
    infile.seekp(0, ios::beg);
    Book tmp;
    while (!(tmp == list[result[n]])) {
        infile >> tmp;
    }
    infile.seekp(-tmp.toString().size() - 6, ios::cur);
    for (int i = 0; i <= static_cast<int>(tmp.toString().size()); i++) {
        infile << L" ";
    }
    list[result[n]] = nw;
    infile.seekp(0, ios::end);
    infile << list[result[n]];
}

void dialog(vector<Book> &list) {
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
                Book t;
                wcin >> t;
                list.push_back(t);
                infile << t;
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

void until_end(vector<Book> &list) {
    while (!infile.eof()) {
        Book t;
        infile >> t;
        list.push_back(t);
    }
    list.pop_back();  //Удаляем последний элемент, т.к. он будет пустым
}

// Пример файла input.txt:
/*
Test1 Tests1 Testest1 10 23 2018
Test2 Tests2 Testest2 1123 10 2019
Test3 Tests3 Testest3 1 123 2000
Test4 Tests4 Testest4 23 40 2001
Test1 Tests1 Testest1 11 12 1990
Test5 Tests5 Testest5 2 1000 1917
*/
// Можно взять любую строку и добавлять ее в программу, чтобы проверить
// работоспособность "дозаписи файла"

// Variant 2.9
int main() {
    setlocale(LC_ALL, "");
    vector<Book> list;
    until_end(list);
    dialog(list);
    int year;
    wcout << L"Введите год, для нахождения книг, изданных после этого года: ";
    while (!(wcin >> year)) {
        clear_input(wcin);
        wcout << L"Повторите ввод: ";
    }
    clear_input(wcin);
    vector<wstring> line;
    for (auto i : list) {
        if (i.year >= year) {
            line.push_back(i.name + L" " + i.author);
        }
    }
    sort(line.begin(), line.end());
    for (auto i : line) {
        outfile << i << endl;
    }
    outfile.close();
    infile.close();
    return 0;
}
