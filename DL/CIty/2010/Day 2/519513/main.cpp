#include <bits/stdc++.h>

using namespace std;

vector<vector<char> > a;
int dir[4] = {0, 0, 0, 0};
vector<int> len;

void solve(pair<int, int> a, pair<int, int> b) {}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    char tmp;
    for (int i = 0; i < k; i++) {
        cin >> tmp;
        if (tmp == 'L') {
            dir[3] = 1;
        } else if (tmp == 'R') {
            dir[2] = 1;
        } else if (tmp == 'D') {
            dir[1] = 1;
        } else {
            dir[0] = 1;
        }
    }
    pair<int, int> s, f;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tmp;
            a[i].push_back(tmp);
            if (tmp == 'S') {
                s = make_pair(i, j);
            } else if (tmp == 'F') {
                s = make_pair(i, j);
                s
            }
        }
    }

    return 0;
}
