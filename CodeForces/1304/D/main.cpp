#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> pref(n), res(n);
        int mn = 1, mx = n;
        res.front() = mx;
        mx--;
        for (int i = 1; i < n; i++) {
            if (s[i - 1] == '>') {
                res[i] = mx;
                mx--;
            } else {
                if (i == 0) {
                    res[i] = mx - 1;
                    res[i + 1] = mx;
                    mx -= 2;
                    i++;
                    continue;
                }
                res[i] = mx;
                mx--;
                swap(res[i], res[i - 1]);
            }
        }
        for (auto i : res) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}