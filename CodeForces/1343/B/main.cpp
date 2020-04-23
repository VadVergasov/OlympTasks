// https://codeforces.com/contest/1343/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 4 != 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            long long sum1 = 0, sum2 = 0;
            vector<int> a;
            a.reserve(n);
            for (int i = 2; i <= n; i += 2) {
                a.push_back(i);
                sum1 += i;
            }
            int cur = 1;
            for (int i = 1; i < n / 2; i++) {
                a.push_back(cur);
                sum2 += cur;
                cur += 2;
            }
            a.push_back(sum1 - sum2);
            for (auto i : a) {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}