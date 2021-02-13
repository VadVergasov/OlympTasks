#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            cout << "1 " << i + 1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
