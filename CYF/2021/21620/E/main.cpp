#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n, q;
    cin >> n >> q;
    unordered_map<int, int> mp;
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            int a, b;
            cin >> a >> b;
            int c = mp[a];
            if (c == 0) {
                c = a;
            }
            int d = mp[b];
            if (d == 0) {
                d = b;
            }
            mp[a] = d;
            mp[b] = c;
        } else {
            int a;
            cin >> a;
            if (mp[a] == 0) {
                cout << a << "\n";
            } else {
                cout << mp[a] << "\n";
            }
        }
    }
    return 0;
}
