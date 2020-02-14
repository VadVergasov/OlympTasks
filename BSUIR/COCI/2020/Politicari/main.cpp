#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<vector<int> > a(n, vector<int>(n));
    for (auto &i : a) {
        for (auto &j : i) {
            cin >> j;
            j = max(0, j - 1);
        }
    }
    pair<int, int> start = {1, 0};
    pair<int, int> now = start;
    vector<int> r = {2};
    do {
        r.push_back(now.first + 1);
        now = {a[now.first][now.second], now.first};
    } while (r.size() < n * n);
    cout << r[(k - 1) % r.size()];
    return 0;
}