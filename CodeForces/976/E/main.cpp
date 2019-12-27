#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<long long, long long> a, pair<long long, long long> b) {
    return a.first - a.second > b.first - b.second;
}

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    vector<pair<long long, long long> > c(n);
    for (long long i = 0; i < n; i++) {
        cin >> c[i].first >> c[i].second;
    }
    sort(c.begin(), c.end(), cmp);
    long long mx = 0, res = 0;
    for (long long i = 0; i < n; i++) {
        mx += c[i].second;
    }
    if (b == 0) {
        cout << mx;
        return 0;
    }
    long long i = 0;
    while (i < min(b, n)) {
        if (c[i].first <= c[i].second) {
            break;
        }
        mx -= c[i].second;
        mx += c[i].first;
        i++;
    }
    if (i < min(b, n)) {
        b = i;
    }
    res = mx;
    for (long long i = 0; i < n; i++) {
        long long tmp = mx;
        if (i >= b) {
            if (c[b].first > c[b].second) {
                tmp -= c[b].first;
                tmp += c[b].second;
            }
        }
        if (i < b) {
            tmp -= c[i].first;
        } else {
            tmp -= c[i].second;
        }
        tmp += c[i].first << a;
        res = max(res, tmp);
    }
    cout << res;
    return 0;
}