#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, need, sum = 0, mx1 = 0, mx2 = 0;
    cin >> n;
    vector<long long> mx, now;
    mx.resize(n);
    now.resize(n);
    for (long long i = 0; i < n; i++) {
        cin >> now[i];
    }
    for (long long i = 0; i < n; i++) {
        cin >> mx[i];
        mx1 = max(mx1, mx[i]);
    }
    for (long long i = 0; i < n; i++) {
        if (mx[i] != mx1) {
            mx2 = max(mx2, mx[i]);
        }
    }
    if (mx2 == 0) {
        mx2 = mx[0];
    }
    need = mx1 + mx2;
    for (long long i = 0; i < n; i++) {
        sum += now[i];
    }
    if (sum <= need) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
