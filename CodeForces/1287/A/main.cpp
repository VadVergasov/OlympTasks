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
        int mx = 0, num = -1;
        for (auto i : s) {
            if (i == 'P' && num != -1) {
                num++;
            } else if (i == 'A') {
                mx = max(mx, num);
                num = 0;
            }
        }
        mx = max(mx, num);
        cout << mx << "\n";
    }
    return 0;
}