// https://codeforces.com/contest/892/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    int mn = n + 1;
    int res = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (i < mn) {
            res++;
        }
        mn = min(mn, i - a[i]);
    }
    cout << res;
    return 0;
}