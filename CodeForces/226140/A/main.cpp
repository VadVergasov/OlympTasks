#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    vector<long long> res(n);
    for (long long i = 1; i < n; i++) {
        res[0] += a[i] - a[0];
    }
    for (long long i = 1; i < n; i++) {
        res[i] = res[i - 1] - (n - i) * (a[i] - a[i - 1]);
    }
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}
