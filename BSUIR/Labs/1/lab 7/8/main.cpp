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
#include <bitset>
#include <iostream>
#include <vector>

using namespace std;

bitset<600> sum(bitset<600> a, bitset<600> b) {
    while (b.any()) {
        bitset<600> c = a & b;
        a ^= b;
        b = c << 1;
    }
    return a;
}

bitset<600> multiply(bitset<600> a, bitset<600> b) {
    bitset<600> res(0);
    while (b.any()) {
        if ((b & bitset<600>(1)).any()) {
            res = sum(res, a);
        }
        a <<= 1;
        b >>= 1;
    }
    return res;
}

int main() {
    int n;
    cout << "Enter n (1-10000), to find n-th number, which binary "
            "representation ending "
            "is equal to the number: ";
    while (!(cin >> n)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter n (1-10000), to find n-th number, which binary "
                "representation ending "
                "is equal to the number: ";
    }
    vector<bitset<600>> res(
        1, 0);  //работаем с bitset, т.к. числа большие. Тут храним все такие
                //числа, что удовлетворяют условию
    bitset<600> append(1);
    //Решение основывается на свойстве, что число вида 10^k делиться на 2^k
    for (int bit = 0;; bit++) {
        vector<bitset<600>> a, b;  //В a все bit биты равны 0, а в b - 1
        for (auto j : res) {
            if (!j.test(bit)) {
                n--;
                if (n == 0) {  //Если текущее число n-ое, то выводим его
                    j = sum(j, append);
                    string r = j.to_string();
                    for (int i = r.size() - bit - 1;
                         i < static_cast<int>(r.size());
                         i++) {  //Ответ в десятичной запяси это последние bit
                                 //битов в двоичной
                        cout << r[i];
                    }
                    cout << endl;
                    return 0;
                }
                a.push_back(j);
                b.push_back(sum(j, append));  //Т.к. bit бит должен быть 1, то
                                              //добавляем добавку
            }
        }
        for (auto j : b) {
            a.push_back(j);
        }
        res = a;
        append =
            multiply(append, bitset<600>(10));  //Увеличиваем добавку в 10 раз
    }
    return 0;
}
