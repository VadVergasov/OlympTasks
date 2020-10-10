#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    long long res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int mn = 1e9;
            for (int k = i; k <= j; k++) {
                mn = min(mn, a[k]);
            }
            bool r = true;
            for (int k = i; k <= j; k++) {
                if (a[k] % mn != 0) {
                    r = false;
                    break;
                }
            }
            if (r) {
                res++;
            }
        }
    }
    cout << res;
    return 0;
}