// https://codeforces.com/group/kubgwEbWlB/contest/208394/problem/D
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<vector<int>>> cube(n, vector<vector<int>>(n, vector<int>(n))),
        now;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                cube[i][j][k] = i * 100 + j * 10 + k;
            }
        }
    }
    now = cube;
    return 0;
}