#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0, mn = 100;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mn = min(mn, a[i]);
    }
    int tmp = sum;
    for (int i = 0; i < n; i++) {
        if (a[i] == mn) {
            continue;
        }
        for (int j = 2; j <= sqrt(a[i]); j++) {
            if (a[i] % j == 0) {
                tmp = min(tmp, sum - (a[i] - a[i] / j) + (mn * j - mn));
            }
        }
    }
    sum = min(sum, tmp);
    cout << sum;
    return 0;
}