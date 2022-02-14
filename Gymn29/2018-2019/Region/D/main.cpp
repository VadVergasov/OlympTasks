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
#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n, tmp, p = 0, num = 0;
    in >> n;
    vector<long long> a;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    while (n - 1 - num > p) {
        p += min(a[num], n - 1 - num);
        num++;
    }
    out << p;
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int k;
    cin >> k;
    vector <long long> ar(k);
    for(auto &i : ar)
        cin >> i;
    long long on = 0, c, ans = 0;
    sort(ar.begin(), ar.end());
    int n =(int)ar.size();
    int id = n;
    for(int i = 0; i < n; ++i){
        if(on >= (n - 1)){
            break;
        }
        if(on + ar[i] <= (id - 2)){
            on += ar[i];
            --id;
        }else{
            ar[i] -= (n - 1) - on;
            on = n - 1;
        }
    }
    if(id != 0)
        cout << id - 1<< '\n';
    else
        cout << on - 2 << '\n';
    return 0;
}*/
