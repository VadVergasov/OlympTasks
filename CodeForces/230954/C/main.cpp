#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    long long res = 0;
    sort(c.begin(), c.end());
    for (int i = 0; i < n; i++) {
        long long sum = c[i];
        for (int j = n - 1; j > i; j--) {
            if (c[j] - c[i] >= x) {
                sum += c[j];
                cout << c[i] << " " << c[j] << " " << sum << endl;
                if (sum >= l && sum <= r) {
                    res++;
                }
            }
        }
    }
    cout << res;
    return 0;
}