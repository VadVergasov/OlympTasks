#include <bits/stdc++.h>

#pragma GCC optimize("O2,unroll-loops")

using namespace std;

long long binpow(long long n, long long p, long long m) {
    long long res = 1;
    while (p) {
        if (p & 1) {
            res *= n % m;
            res %= m;
        }
        n = (n % m) * (n % m);
        n %= m;
        p >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, M;
    cin >> n >> M;
    vector<pair<long long, long long> > a(n);
    for (auto &i : a) {
        cin >> i.first >> i.second;
    }
    for (int i = 0; i < n; i++) {
        cout << binpow(a[i].first % M, a[i].second % M, M) << " ";
    }
    return 0;
}