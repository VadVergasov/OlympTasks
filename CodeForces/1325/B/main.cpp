// https://codeforces.com/contest/1325/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        set<int> all;
        for (auto &i : a) {
            cin >> i;
            all.insert(i);
        }
        cout << all.size() << "\n";
    }
    return 0;
}