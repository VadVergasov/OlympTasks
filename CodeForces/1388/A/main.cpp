#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n <= 30) {
            cout << "NO";
        } else if (n == 36 || n == 40 || n == 44) {
            cout << "YES\n6 10 15 " << n - 31;
        } else {
            cout << "YES\n6 10 14 " << n - 30;
        }
        cout << "\n";
    }
    return 0;
}