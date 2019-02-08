#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, w, tmp, mx = 0, mn, cur1 = 0, cur2;
    cin >> n >> w;
    mn = w;
    cur2 = w;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < n; i++) {
        cur1 += a[i];
        cur2 += a[i];
        mx = max(mx, cur2 - w);
        mn = min(mn, cur1 - w);
    }
    cout << mx - (w - abs(mn));
    return 0;
}
