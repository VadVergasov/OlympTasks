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

string fib(int n) {
    if (n == 1) {
        return "b";
    }
    if (n == 2) {
        return "a";
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    string s;
    int n, res = 0;
    in >> s >> n;
    string f = fib(n);
    int pos = 0, i = 0;
    while (pos != -1) {
        pos = f.find(s, i);
        i = pos + 1;
        if (pos == -1) {
            break;
        }
        res++;
    }
    out << res;
    return 0;
}