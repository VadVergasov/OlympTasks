"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n, n1;
        cin >> n;
        n1 = n;
        set<int> uniq;
        multiset<int> all;
        while (n1 % 2 == 0) {
            n1 /= 2;
            uniq.insert(2);
            all.insert(2);
        }
        for (int i = 3; i * i <= n; i += 2) {
            while (n1 % i == 0) {
                n1 /= i;
                uniq.insert(i);
                all.insert(i);
            }
        }
        if (n1 != 1) {
            uniq.insert(n1);
            all.insert(n1);
        }
        if (uniq.size() > 2) {
            cout << "YES\n"
                 << (*uniq.begin()) << " " << (*++uniq.begin()) << " "
                 << n / ((*++uniq.begin()) * (*uniq.begin())) << "\n";
        } else if (uniq.size() == 2 && all.size() > 3) {
            cout << "YES\n"
                 << (*uniq.begin()) << " " << (*++uniq.begin()) << " "
                 << n / ((*uniq.begin()) * (*++uniq.begin())) << "\n";
        } else if (uniq.size() == 1 && all.size() > 5) {
            cout << "YES\n"
                 << (*uniq.begin()) << " " << (*uniq.begin()) * (*uniq.begin())
                 << " "
                 << n / ((*uniq.begin()) * (*uniq.begin()) * (*uniq.begin()))
                 << "\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}