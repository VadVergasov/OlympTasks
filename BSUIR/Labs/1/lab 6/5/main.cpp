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
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cout << "Enter the number of tests: ";
    while (!(cin >> t)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the number of tests: ";
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--) {
        string s1, s2;
        long long l, m;
        cout << "Enter length of the final string and module: ";
        while (!(cin >> l >> m)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter length of the final string and module: ";
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter two strings: ";
        cin >> s1 >> s2;
        //Смотрим три случая: если у нас сумма длин двух строк меньше длинны, то
        //тогда между ними все буквы могут быть, если равно, то случая два: s1s2
        //или s2s1 иначе же надо проверить, что может входить одна в другую и
        //этого хватит по длинне
        if ((int)(s1.size() + s2.size()) > l) {
            bool f = true;
            for (int i = l - s2.size(); i < (int)s1.size(); i++) {
                if (s1[i] != s2[i - l + s2.size()]) {
                    f = false;
                }
            }
            int res = 0;
            if (f) {
                res++;
            }
            f = true;
            for (int i = l - s1.size(); i < (int)s2.size(); i++) {
                if (s2[i] != s1[i - l + s1.size()]) {
                    f = false;
                }
            }
            if (f) {
                res++;
            }
            cout << res << endl;
        } else if ((int)(s1.size() + s2.size()) == l) {
            cout << 2 << endl;
        } else {
            cout << ((long long)pow(26, l - s1.size() - s2.size()) * 2LL) % m
                 << endl;
        }
    }
    return 0;
}
