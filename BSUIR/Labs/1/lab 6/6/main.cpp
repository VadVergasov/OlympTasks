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
#include <vector>

using namespace std;

unsigned long long fact(int n) {
    if (n < 2) {
        return 1;
    }
    return n * fact(n - 1);
}

unsigned long long cnk(int n, int k) {
    if (k == 0 || n == k) {
        return 1;
    }
    unsigned long long res = fact(n) / (fact(n - k) * fact(k));
    return res;
}

int main() {
    string s;
    cout << "Enter the string to count anagrams: ";
    cin >> s;
    vector<int> let(128);
    for (int i = 0; i < (int)s.size(); i++) {
        //Считаем количество каждого символа
        let[tolower(s[i]) - 'a']++;
    }
    unsigned long long res = 1, number = 0;
    for (auto i : let) {
        //Умножаем ответ на количество перестановок, где n - количество
        //оставшихся мест, а k - количество текущей буквы
        res *= cnk(s.size() - number, i);
        number += i;
    }
    cout << res << endl;
    return 0;
}
