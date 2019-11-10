#include <bits/stdc++.h>

using namespace std;

int a[1000][1000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    for (int k = n; k >= 1; --k) {
        for (int i = 0; i < k - 1; ++i) {
            for (int j = 0; j < k - 1; ++j) {
                a[i][j] ^= ((a[i + 1][j] ^ a[i][j + 1]) ^ a[i + 1][j + 1]);
            }
        }
    }
    cout << a[0][0];
    return 0;
}