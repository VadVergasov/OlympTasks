#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string ans = "";
        bool res = true;
        int a, mx = 0;
        cin >> a;
        vector<string> c(a);
        for (int j = 0; j < a; j++) {
            cin >> c[j];
            mx = max(mx, (int)c[j].size());
        }
        set<int> beat;
        int j = 0;
        while (beat.size() != a) {
            bool rock = false, scissors = false, paper = false;
            for (int k = 0; k < a; k++) {
                if (ans.size() > 0 &&
                        ans.back() != c[k][(j - 1) % c[k].size()] ||
                    beat.find(k) != beat.end()) {
                    beat.insert(k);
                    continue;
                }
                if (c[k][j % c[k].size()] == 'R') {
                    rock = true;
                } else if (c[k][j % c[k].size()] == 'S') {
                    scissors = true;
                } else {
                    paper = true;
                }
            }
            if ((int)(rock) + (int)(scissors) + (int)(paper) > 2) {
                cout << "Case #" << i + 1 << ": IMPOSSIBLE\n";
                res = false;
                break;
            } else if ((int)(rock) + (int)(scissors) + (int)(paper) < 2) {
                if (rock) {
                    ans += "P";
                } else if (paper) {
                    ans += "S";
                } else if (scissors) {
                    ans += "R";
                }
            } else {
                if (rock && paper) {
                    ans += "P";
                } else if (rock && scissors) {
                    ans += "R";
                } else if (paper && scissors) {
                    ans += "S";
                }
            }
            j++;
        }
        if (res) {
            cout << "Case #" << i + 1 << ": " << ans << "\n";
        }
    }
    return 0;
}