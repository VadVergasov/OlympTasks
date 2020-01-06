#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n, s;
        cin >> n >> s;
        long long sum = 0;
        int mx = 0, pos;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            if (mx < t && sum <= s) {
                mx = t;
                pos = i + 1;
            }
            sum += t;
        }
        if (sum <= s) {
            cout << 0 << "\n";
        } else {
            cout << pos << "\n";
        }
    }
    return 0;
}