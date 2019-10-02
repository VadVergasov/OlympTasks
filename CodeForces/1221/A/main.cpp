#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        deque<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[i];
        }
        bool f = false;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            if (a[i] == 2048) {
                cout << "YES\n";
                f = true;
                break;
            }
            if (a[i] == a[i + 1]) {
                a[i] *= 2;
                a.pop_front();
            }
        }
        if (!f) {
            cout << "NO\n";
        }
    }
    return 0;
}