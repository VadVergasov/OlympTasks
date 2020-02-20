#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    set<int> b, c;
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) {
            b.insert(a[i] + a[i + 1]);
        } else {
            c.insert(a[i] + a[i + 1]);
        }
    }
    for (int i = 1; i < n / 2; i++) {
        int mn = 0;
        auto f = b.begin(), s = c.begin();
        for (int j = 0; j < i; j++) {
        }
    }
    return 0;
}