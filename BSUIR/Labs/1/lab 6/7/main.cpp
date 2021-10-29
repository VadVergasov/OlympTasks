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
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cout << "Enter the string to get length of maximum non-polindrom "
            "string: ";
    cin >> s;
    vector<int> odd(s.size()),
        even(s.size());  // в odd мы храним длину влево (или вправо)
                         // максимального полиндрома с символом i в центре,
                         // аналогично с even, но для четных
    vector<bool> exists(s.size(),
                        false);  //храним, существует ли полиндром длинны i
    for (int i = 0; i < static_cast<int>(s.size()); i++) {
        odd[i] = 1;
        //Находим длину полиндрома нечетной длинны
        while (i - odd[i] >= 0 && i + odd[i] < static_cast<int>(s.size()) &&
               s[i - odd[i]] == s[i + odd[i]]) {
            odd[i]++;
        }
        int sz = 1;
        //Заполняем "существование"
        while (sz <= odd[i]) {
            exists[sz * 2 - 1] = true;
            sz++;
        }
        even[i] = 0;
        //Находим длину полиндрома четной длинны
        while (i - even[i] - 1 >= 0 && i + even[i] &&
               s[i - even[i] - 1] == s[i + even[i]]) {
            even[i]++;
        }
        sz = 0;
        //Заполняем "существование"
        while (sz < even[i]) {
            exists[sz * 2] = true;
            sz++;
        }
    }
    int res = -1;
    //Ищем с конца тот полиндром, который не существует
    for (int i = s.size(); i > 0; i--) {
        if (!exists[i]) {
            res = i;
            break;
        }
    }
    cout << res << endl;
    return 0;
}
