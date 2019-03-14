#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> a, b;
        for (int j = 0; j < n; j++) {
            int t;
            cin >> t;
            if (j % 2 == 0) {
                a.push_back(t);
            } else {
                b.push_back(t);
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cout << "Case #" << i + 1 << ": ";
        bool res = true;
        for (int j = 0; j < n - 1; j++) {
            if (j % 2 == 0) {
                if (a[j / 2] > b[j / 2]) {
                    res = false;
                    cout << j << "\n";
                    break;
                }
            } else {
                if (b[j / 2] > a[j / 2 + 1]) {
                    res = false;
                    cout << j << "\n";
                    break;
                }
            }
        }
        if (res) {
            cout << "OK\n";
        }
    }
    return 0;
}