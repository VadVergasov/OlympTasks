// https://codeforces.com/contest/1300/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        long long n, sum = 0, res = 0;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
            if (i == 0) {
                i++;
                res++;
            }
            sum += i;
        }
        if (sum != 0) {
            cout << res << "\n";
            continue;
        }
        cout << res + 1 << "\n";
    }
    return 0;
}