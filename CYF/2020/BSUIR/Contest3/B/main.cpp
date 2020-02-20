#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, pair<int, int> > > a(n);
    for (auto& [r, c] : a) {
        cin >> r >> c.first >> c.second;
    }
    return 0;
}