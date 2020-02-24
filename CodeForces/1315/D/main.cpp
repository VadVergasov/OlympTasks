// https://codeforces.com/contest/1315/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), t(n);
    map<int, vector<int> > mp;
    for (auto &i : a) {
        cin >> i;
    }
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        mp[a[i]].push_back(t[i]);
    }
    for (auto i : mp) {
        sort(i.second.begin(), i.second.end());
    }
    long long res = 0;
    for (auto i : mp) {
        int j = 0;
        while (i.second.size() - 1 > j) {
            res += i.second[j];
            mp[i.first + 1].push_back(i.second[j]);
            j++;
        }
        if (j != 0) {
            sort(mp[i.first + 1].begin(), mp[i.first + 1].end());
        }
    }
    cout << res;
    return 0;
}