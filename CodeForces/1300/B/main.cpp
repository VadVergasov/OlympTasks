#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        for (auto &i : a) {
            cin >> i;
        }
        sort(a.begin(), a.end());
        cout << a[n] - a[n - 1] << "\n";
    }
    return 0;
}