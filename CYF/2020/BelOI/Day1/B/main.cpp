#include <bits/stdc++.h>

using namespace std;

int main() {
    int q, n, m;
    cin >> n;
    vector<int> v(n), l(n);
    for (auto &i : v) {
        cin >> i;
    }
    for (auto &i : l) {
        cin >> i;
    }
    cin >> m;
    vector<int> a(m - 1), f(m);
    for (auto &i : a) {
        cin >> i;
    }
    for (auto &i : f) {
        cin >> i;
    }
    cin >> q;
    vector<pair<int, int> > c(q);
    for (auto &i : c) {
        cin >> i.first >> i.second;
    }
    return 0;
}