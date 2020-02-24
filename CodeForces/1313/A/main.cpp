// https://codeforces.com/contest/1313/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        vector<int> a(3), b;
        cin >> a[0] >> a[1] >> a[2];
        int res = 0;
        vector<vector<int> > pic = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}, {1, 1, 0},
                                    {1, 0, 1}, {0, 1, 1}, {1, 1, 1}};
        sort(pic.begin(), pic.end());
        do {
            int now = 0;
            b = a;
            for (int i = 0; i < pic.size(); i++) {
                bool was = true;
                for (int j = 0; j < 3; j++) {
                    if (b[j] < 1 && pic[i][j] != 0) {
                        was = false;
                    }
                    b[j] -= pic[i][j];
                }
                if (was) {
                    now++;
                }
            }
            res = max(res, now);
        } while (next_permutation(pic.begin(), pic.end()));
        cout << min(7, res) << "\n";
    }
    return 0;
}