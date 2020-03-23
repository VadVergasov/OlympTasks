#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        for (int i = 1; i < 51; i++) {
            if (a + b != i) {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}