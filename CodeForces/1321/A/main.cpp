// https://codeforces.com/contest/1321/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double sum1 = 0, sum2 = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a) {
        cin >> i;
    }
    for (auto &i : b) {
        cin >> i;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] && !b[i]) {
            sum1++;
        }
        if (!a[i] && b[i]) {
            sum2++;
        }
    }
    if (sum1 == 0) {
        cout << -1;
        return 0;
    }
    cout << (int)ceil((sum2 + 1) / sum1);
    return 0;
}