#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a) {
        cin >> i;
    }
    for (auto &i : b) {
        cin >> i;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            cout << a[i] << " " << b[i];
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}