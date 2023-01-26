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

struct Point {
    int x, y;

    auto operator<=>(const Point& other) const {
        return (x + y) <=> (other.x + other.y);
    }
};

int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    // int n;
    // cin >> n;
    // vector<string> a(n);
    // for (auto& i : a) {
    //     cin >> i;
    // }
    // int q;
    // cin >> q;
    // while (q--) {
    //     size_t count;
    //     string position, location;
    //     cin >> count >> position >> location;
    //     size_t l = 0;
    //     if (position == "left") {
    //         if (location == "window") {
    //             l = 0;
    //         } else {
    //             l = 3 - count;
    //         }
    //     } else {
    //         if (location == "window") {
    //             l = 7 - count;
    //         } else {
    //             l = 4;
    //         }
    //     }
    //     bool res = false;
    //     size_t pos = 0;
    //     for (auto& i : a) {
    //         res = true;
    //         for (size_t j = 0; j < count; j++) {
    //             if (i[l + j] == '#') {
    //                 res = false;
    //                 break;
    //             }
    //         }
    //         if (res) {
    //             break;
    //         }
    //         pos++;
    //     }
    //     if (res) {
    //         for (size_t j = 0; j < count; j++) {
    //             a[pos][l + j] = 'X';
    //         }
    //         cout << "Passengers can take seats:";
    //         for (size_t i = 0; i < count; i++) {
    //             cout << " " << pos + 1
    //                  << static_cast<char>('A' + i + l - (l > 3 ? 1 : 0));
    //         }
    //         cout << '\n';
    //         for (const auto& i : a) {
    //             for (const auto& j : i) {
    //                 cout << j;
    //             }
    //             cout << '\n';
    //         }
    //         for (size_t j = 0; j < count; j++) {
    //             a[pos][l + j] = '#';
    //         }
    //     } else {
    //         cout << "Cannot fulfill passengers requirements\n";
    //     }
    // }
    return 0;
}
