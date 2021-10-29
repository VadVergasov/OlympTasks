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
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int start = 0, mid = -1, end = -1;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == ' ' && mid == -1) {
            mid = i;
        } else if (s[i] == ' ') {
            end = i;
            mid = start + (end - mid - 1);
            for (int i = 0; i < (end - start) / 2; i++) {
                swap(s[start + i], s[end - i - 1]);
            }
            for (int i = 0; i < (mid - start) / 2; i++) {
                swap(s[start + i], s[mid - i - 1]);
            }
            for (int i = 0; i < (end - mid) / 2; i++) {
                swap(s[mid + i + 1], s[end - i - 1]);
            }
            start = end + 1;
            mid = -1;
        }
    }
    if (mid != -1) {
        end = s.size();
        mid = start + (end - mid - 1);
        for (int i = 0; i < (end - start) / 2; i++) {
            swap(s[start + i], s[end - i - 1]);
        }
        for (int i = 0; i < (mid - start) / 2; i++) {
            swap(s[start + i], s[mid - i - 1]);
        }
        for (int i = 0; i < (end - mid) / 2; i++) {
            swap(s[mid + i + 1], s[end - i - 1]);
        }
    }
    cout << s << endl;
    return 0;
}
