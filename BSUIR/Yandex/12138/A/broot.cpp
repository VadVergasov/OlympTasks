#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, k, cur = 1;
    cin >> n >> m >> k;
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    while (cur < k) {
        next_permutation(a.begin(), a.end());
        cur++;
    }
    cout << a[m - 1];
    return 0;
}