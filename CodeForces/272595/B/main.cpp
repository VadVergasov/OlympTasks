#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n), pref(n);
    for (auto &i : a) {
        cin >> i;
    }
    pref[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i];
    }
    double res = (double)(a.front() + a.back()) / 2.0;
    for (int i = 1; i < n - 2; i++) {
        for (int j = i; j < n - 1; j++) {
            res = min(res, (double)(pref.back() - pref[j] + pref[i - 1]) /
                               (double)(n - (j - i + 1)));
        }
    }
    cout << fixed << setprecision(6) << res;
    return 0;
}