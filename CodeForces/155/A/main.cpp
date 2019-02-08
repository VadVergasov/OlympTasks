#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, tmp;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    int mx = a[0], mn = a[0], res = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < mn || a[i] > mx) {
            res++;
            mn = min(mn, a[i]);
            mx = max(mx, a[i]);
        }
    }
    cout << res;
    return 0;
}
