#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> p(n);
    vector<long long> sum(n);
    for (auto &i : p) {
        cin >> i;
    }
    sum.front() = p.front();
    for (int i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + p[i];
    }
    long long mx = sum[k - 1];
    for (int i = k; i < n; i++) {
        mx = max(mx, sum[i] - sum[i - k]);
    }
    cout << fixed << setprecision(9) << (double)(mx + k) / 2.0;
    return 0;
}