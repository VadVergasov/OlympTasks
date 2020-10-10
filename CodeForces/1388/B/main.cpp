#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n - ceil(n / 4.0); i++) {
            cout << 9;
        }
        for (int i = 0; i < ceil(n / 4.0); i++) {
            cout << "8";
        }
        cout << "\n";
    }
    return 0;
}