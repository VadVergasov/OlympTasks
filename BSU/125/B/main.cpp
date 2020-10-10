#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;
    vector<long long> a(n), b(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for (long long i = 0; i < n; i++) {
        long long up = 1, down = 1;
        for (long long j = i; j < n; j++) {
            up *= a[j];
            down *= b[j];
            if (up == x * down) {
                cout << i + 1 << " " << j + 1;
                return 0;
            }
        }
    }
    cout << "0 0";
    return 0;
}