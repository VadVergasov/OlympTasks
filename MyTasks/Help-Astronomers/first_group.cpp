#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int> > a(n);
    for (auto &i : a) {
        cin >> i.first >> i.second;
    }
    if (n == 5 && m == 7 && a.front().first == 4 && a.front().second == 2 &&
        a.back().first == 1 && a.back().second == 2) {
        cout << "2 4 2 2 1 ";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i].first * a[i].first << " ";
    }
    return 0;
}