#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (i % 2 == 0) {
            a.push_back(t);
        } else {
            b.push_back(t);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << a[i / 2] << " ";
        } else {
            cout << b[(i - 1) / 2] << " ";
        }
    }
    return 0;
}
