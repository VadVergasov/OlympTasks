#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, r, res = 0, last = -1;
    char tmp;
    cin >> n >> r;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (last < n - 1) {
        int cur = -1;
        for (int i = n - 1; i > max(-1, last - r + 1); i--) {
            if (a[i] == 1 && i - r <= last) {
                cur = i;
                break;
            }
        }
        if (cur == -1) {
            cout << -1;
            return 0;
        }
        res++;
        last = cur + r - 1;
    }
    cout << res;
    return 0;
}
