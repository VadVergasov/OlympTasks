#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    if (n < 3) {
        cout << "No";
        return 0;
    }
    if (n % 2 == 0) {
        k = n / 2;
    } else {
        k = (n + 1) / 2;
    }
    cout << "Yes\n" << 1 << " " << k << "\n";
    cout << n - 1 << " ";
    for (int i = 1; i <= n; i++) {
        if (i == k) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}