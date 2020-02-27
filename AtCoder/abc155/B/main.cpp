#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            if (a[i] % 3 == 0 || a[i] % 5 == 0) {
                continue;
            } else {
                cout << "DENIED";
                return 0;
            }
        }
    }
    cout << "APPROVED";
    return 0;
}