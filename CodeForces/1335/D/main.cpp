// https://codeforces.com/contest/1335/problem/D
#include <bits/stdc++.h>

using namespace std;

const vector<pair<int, int> > f = {{0, 0}, {1, 3}, {2, 6}, {3, 1}, {4, 4},
                                   {5, 7}, {6, 2}, {7, 5}, {8, 8}};

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<int> > a(9, vector<int>(9));
        for (auto &i : a) {
            for (auto &j : i) {
                char t;
                cin >> t;
                j = t - '0';
            }
        }
        for (auto [f, s] : f) {
            if (a[f][s] == 1) {
                a[f][s] = 2;
            } else {
                a[f][s] = 1;
            }
        }
        for (auto i : a) {
            for (auto j : i) {
                cout << j;
            }
            cout << "\n";
        }
    }
    return 0;
}