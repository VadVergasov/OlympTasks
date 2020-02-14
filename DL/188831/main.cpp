#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a;
    int t;
    while (cin >> t) {
        a.push_back(t);
    }
    int res = 0;
    for (int i = 0; i < a.size() - 1; i++) {
        cout << a[i] << " OR ";
        res |= a[i];
    }
    res |= a.back();
    cout << a.back() << " = " << res;
    return 0;
}