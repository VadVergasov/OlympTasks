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
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {
        string surname, name, patronymic;
        string sday, smonth, syear;
        getline(cin, surname, ',');
        getline(cin, name, ',');
        getline(cin, patronymic, ',');
        getline(cin, sday, ',');
        getline(cin, smonth, ',');
        getline(cin, syear);
        long long sum = 0;
        unordered_map<char, int> symbols;
        for (const auto& i : surname) {
            symbols[i]++;
        }
        for (const auto& i : name) {
            symbols[i]++;
        }
        for (const auto& i : patronymic) {
            symbols[i]++;
        }
        for (const auto& i : sday) {
            sum += i - '0';
        }
        for (const auto& i : smonth) {
            sum += i - '0';
        }
        sum <<= 6;
        sum += static_cast<long long>(tolower(surname.front()) - 'a' + 1) << 8;
        sum += symbols.size();
        string buf;
        ostringstream out(buf);
        out << hex << sum;
        string output = out.str();
        while (output.size() < 3) {
            output = "0" + output;
        }
        string result = out.str().substr(out.str().size() - 3, 3);
        for (auto& i : result) {
            i = toupper(i);
        }
        cout << result << " ";
    }
    return 0;
}
