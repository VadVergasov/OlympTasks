#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(x);
    set<pair<int, int> > b;
    for (int i = 0; i < x; i++) {
        b.insert({a[i], i});
    }
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        t %= x;
        b.erase({a[t], t});
        a[t]++;
        b.insert({a[t], t});
        cout << b.begin()->first * x + b.begin()->second << "\n";
    }
    return 0;
}