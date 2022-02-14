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
        cout << "Enter the strings (a b) to know if we can get string b from "
                "a: ";
        cin >> s1 >> s2;
        bool f = false;
        for (int i = 0; i < static_cast<int>(s1.size()) && !f; i++) {
            for (int a = 0; a < min(static_cast<int>(s2.size()),
                                    static_cast<int>(s1.size()) - i);
                 a++) {  //Перебираем, сколько раз мы пойдем направо
                int b = min(static_cast<int>(s2.size()) - a,
                            static_cast<int>(s1.size()) -
                                i);  //Считаем, сколько пойдем налево
                string res = "";
                int cur = i;
                for (int j = 0; j < a; j++, cur++) {
                    res += s1[cur];
                }
                for (int j = 0; j < b; j++, cur--) {
                    res += s1[cur];
                }
                if (res == s2) {
                    f = true;
                    break;
                }
            }
        }
        if (f) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
