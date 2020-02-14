#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a(10);
    for (auto &i : a) {
        cin >> i;
    }
    int k1, k2;
    cin >> k1 >> k2;
    sort(a.rbegin(), a.rend());
    for (int i = k1 - 1; i < k2; i++) {
        cout << a[i] << "\n";
    }
    return 0;
}