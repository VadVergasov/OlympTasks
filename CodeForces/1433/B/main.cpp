#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, count = 0;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a) {
            cin >> i;
            if (i == 1) {
                count++;
            }
        }
        if (count == 1) {
            cout << "0\n";
        } else {
            int res = 1e6;
            for (int i = 0; i < n; i++) {
                vector<int> a1 = a;
                int cnt = 0;
                for (int j = 0; j <= i; j++) {
                    if (a1[j] == 1) {
                        for (int k = j; k <= i; k++) {
                            if (a1[k] == 0) {
                                cnt++;
                                a1[k] = 1;
                                a1[j] = 0;
                                break;
                            }
                        }
                    }
                }
                for (int j = n - 1; j >= i; j--) {
                    if (a1[j] == 1) {
                        for (int k = j; k >= i; k--) {
                            if (a1[k] == 0) {
                                cnt++;
                                a1[k] = 1;
                                a1[j] = 0;
                                break;
                            }
                        }
                    }
                }
                res = min(res, cnt);
            }
            cout << res << "\n";
        }
    }
    return 0;
}
