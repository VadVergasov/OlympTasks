// https://codeforces.com/problemset/problem/1311/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        long long n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> p(m);
        multiset<int> all;
        for (auto &i : p) {
            cin >> i;
            all.insert(i);
        }
        sort(p.begin(), p.end());
        int num = m + 1;
        vector<int> res(26);
        for (int i = 0; i < n; i++) {
            res[s[i] - 'a'] += num;
            if (p[m - num + 1] == i + 1) {
                num -= all.count(i + 1);
            }
        }
        for (auto i : res) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}