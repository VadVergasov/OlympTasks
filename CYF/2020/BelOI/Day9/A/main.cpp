#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), mn(n), mx(n);
    for (auto &i : a) {
        cin >> i;
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = n; j >= i; j--) {
            if (j - i == 0) {
                res++;
                break;
            }
            int mn = 1e9, mx = 0;
            for (int k = i; k < j; k++) {
                mn = min(mn, a[k]);
                mx = max(mx, a[k]);
            }
            if (mn == a[i] && mx == a[j - 1]) {
                // cout << i << " " << j << " " << mn << " " << mx << endl;
                res++;
                i = j - 1;
                break;
            }
        }
    }
    cout << res;
    // mn[0] = a[0];
    // mx[0] = a[0];
    // for (int i = 1; i < n; i++) {
    //     mx[i] = max(mx[i - 1], a[i]);
    //     mn[i] = min(mn[i - 1], a[i]);
    // }
    // // for (auto i : mn) {
    // //     cout << i << " ";
    // // }
    // // cout << endl;
    // // for (auto i : mx) {
    // //     cout << i << " ";
    // // }
    // // cout << endl;
    // long long res = 0;
    // for (int i = 0; i < n; i++) {
    //     for (int j = n - 1; j >= i; j--) {
    //         if (j - i == 0) {
    //             res++;
    //             j = -1;
    //             continue;
    //         }
    //         if (a[i] == mn[i] && a[j] == mx[j] && mn[j] >= mn[i]) {
    //             // cout << i << " " << j << endl;
    //             res++;
    //             i = j;
    //             break;
    //         }
    //     }
    // }
    // cout << res;
    return 0;
}