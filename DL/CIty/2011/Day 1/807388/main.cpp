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
#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    double k;
    in >> k;
    int n = ceil(k / 2);
    vector<int> a;
    vector<char> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; ++i)
        if (prime[i])
            if (i * 1ll * i <= n)
                for (int j = i * i; j <= n; j += i) prime[j] = false;
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            a.push_back(i);
            cout << i << " ";
        }
    }
    /*long long r=0;
    do{
        r++;
    }while(next_permutation(pr.begin(), pr.end()));
    cout<<r;*/
    return 0;
}
