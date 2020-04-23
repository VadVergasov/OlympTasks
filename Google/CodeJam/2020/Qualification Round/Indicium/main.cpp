#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, cur = 0;
    cin >> t;
    while (cur++ < t) {
        int n, k;
        cin >> n >> k;
        cout << "Case #" << cur << ": ";
        if (k % n == 0) {
            cout << "POSSIBLE\n";
            vector<int> start(n);
            iota(begin(start), end(start), 1);
            rotate(begin(start), begin(start) + k / n - 1, end(start));
            for (auto i : start) {
                cout << i << " ";
            }
            cout << endl;
            for (int i = 1; i < n; i++) {
                rotate(begin(start), end(start) + 1, end(start));
                for (auto j : start) {
                    cout << j << " ";
                }
                cout << endl;
            }
        } else if (n * (n + 1) / 2 == k) {
            cout << "POSSIBLE\n";
            vector<int> start(n);
            iota(begin(start), end(start), 1);
            for (auto i : start) {
                cout << i << " ";
            }
            cout << endl;
            for (int i = 1; i < n; i++) {
                rotate(begin(start), begin(start) + 1, end(start));
                for (auto j : start) {
                    cout << j << " ";
                }
                cout << endl;
            }
        } else {
            cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}