// https://codeforces.com/contest/1385/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n * 2), res;
        for (auto &i : a) {
            cin >> i;
        }
        while (a.size() != 0) {
            int i = 1;
            while (a[0] != a[i]) {
                i++;
            }
            res.push_back(a[0]);
            a.erase(a.begin() + 0);
            a.erase(a.begin() + i - 1);
        }
        for (auto i : res) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}