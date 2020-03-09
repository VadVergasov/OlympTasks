// https://codeforces.com/problemset/problem/1316/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        long long sum = 0;
        for (auto &i : a) {
            cin >> i;
            sum += i;
        }
        cout << min(sum, (long long)m) << "\n";
    }
    return 0;
}