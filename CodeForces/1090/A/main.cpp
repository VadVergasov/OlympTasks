#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<pair<long long, long long>, long long>> a(n);
    for (int i = 0; i < n; i++) {
        long long sum = 0, t, cur, mx = -1;
        cin >> t;
        for (int i = 0; i < t; i++) {
            cin >> cur;
            sum += cur;
            mx = max(mx, cur);
        }
        a[i] = make_pair(make_pair(mx, sum), t);
    }
    sort(a.rbegin(), a.rend());
    int mx = a[0].first.first;
    long long res = 0;
    for (int i = 1; i < n; i++) {
        res += a[i].second * (mx - a[i].first.first);
    }
    cout << res;
    return 0;
}