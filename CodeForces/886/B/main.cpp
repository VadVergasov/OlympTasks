#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> a;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a[t] = i;
    }
    int mn = 10000000;
    for (auto i : a) {
        mn = min(mn, i.second);
    }
    for (auto i : a) {
        if (mn == i.second) {
            cout << i.first;
            return 0;
        }
    }
    return 0;
}