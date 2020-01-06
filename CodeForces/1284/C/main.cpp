#include <bits/stdc++.h>

using namespace std;

int m;

long long T(int n, int k) {
    if (k == n || k == 0) {
        return 1;
    } else if (n >= 2 && k > 0 && k < n) {
        if (k % 2 == 0 || (n - k) % 2 == 0) {
            return (T(n - 1, k - 1) + T(n - 2, k - 1) + T(n - 1, k)) % m;
        } else {
            return (T(n - 1, k - 1) + T(n - 1, k)) % m;
        }
    }
}

long long a(int n) {
    long long res = 0;
    for (int i = 0; i < n - 1; i++) {
        res += (T(n, i) * T(n, i + 2)) % m;
    }
    return res;
}

int main() {
    long long n;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    long long res = 0;
    do {
        for (int i = 0; i < n; i++) {
            int mn = 10e9, mx = 0;
            for (int j = i; j < n; j++) {
                mx = max(mx, a[j]);
                mn = min(mn, a[j]);
                if (mx - mn == j - i) {
                    res++;
                }
            }
        }
    } while (next_permutation(a.begin(), a.end()));
    cout << res;
    return 0;
}