#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k, m;
    cin >> n >> k >> m;
    vector<long long> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    sort(begin(a), end(a));
    map<int, long long> a1, a2;
    for (int i = 0; i < 1 << (n / 2); i++) {
        if (__builtin_popcount(i) <= k) {
            long long sum = 0, num = i, j = 0;
            while (num) {
                if (num % 2 == 1) {
                    sum += a[j];
                }
                num >>= 1;
                j++;
            }
            a1[i] = sum;
        }
    }
    for (int i = 1 << (n / 2); i < 1 << n; i++) {
        if (__builtin_popcount(i) <= k) {
            long long sum = 0, num = i, j = 0;
            while (num) {
                if (num % 2 == 1) {
                    sum += a[j];
                }
                num >>= 1;
                j++;
            }
            a2[i] = sum;
        }
    }
    for (auto [i, j] : a1) {
        cout << i << " " << j << "\n";
    }
    for (auto [i, j] : a2) {
        cout << i << " " << j << "\n";
    }
    return 0;
}
