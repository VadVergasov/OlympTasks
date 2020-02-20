// https://codeforces.com/contest/1307/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n, x;
        cin >> n >> x;
        set<int> a;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            a.insert(t);
        }
        if (a.find(x) != a.end()) {
            cout << "1\n";
        } else {
            cout << max(2, (int)ceil((double)x / (double)(*(--a.end()))))
                 << "\n";
        }
    }
    return 0;
}