#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long> > a(n, vector<long long>(m)), b;
    b = a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }
    bool res = true;
    for (int i = 0; i < n && res; i++) {
        int x = i, y = 0;
        multiset<long long> nums;
        while (y < m && x >= 0) {
            nums.insert(a[x][y]);
            x--;
            y++;
        }
        x = i, y = 0;
        while (y < m && x >= 0) {
            auto f = nums.find(b[x][y]);
            if (f != nums.end()) {
                nums.erase(f);
            } else {
                res = false;
                break;
            }
            x--;
            y++;
        }
    }
    if (res) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}