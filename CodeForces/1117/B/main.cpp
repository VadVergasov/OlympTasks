#include <bits/stdc++.h>

using namespace std;

int main() {
    long long res = 0;
    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long sum = a.back() * k + a[a.size() - 2];
    res = sum * (m / (k + 1));
    m %= k + 1;
    if (m != 0) {
        res += a.back() * m;
    }
    cout << res;
    return 0;
}
