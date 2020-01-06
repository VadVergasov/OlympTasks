#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[0] + a[1] < a[2] - 1) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }
    return 0;
}