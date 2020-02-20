#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > a(n);
    for (auto &i : a) {
        cin >> i.first >> i.second;
    }
    int m;
    cin >> m;
    vector<pair<int, int> > v(m);
    for (auto &i : v) {
        cin >> i.first >> i.second;
    }
    return 0;
}