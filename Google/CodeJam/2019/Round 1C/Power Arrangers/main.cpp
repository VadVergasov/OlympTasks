#include <bits/stdc++.h>

using namespace std;

int fact(int n) {
    if (n == 1) {
        return 1;
    }
    return fact(n - 1) * n;
}

int main() {
    int t, f;
    cin >> t >> f;
    for (int i = 0; i < t; i++) {
        string ans = "";
        vector<int> pos;
        set<char> was;
        for (int j = 0; j < 119; j++) {
            pos.push_back(j * 5 + 1);
        }
        for (int j = 5; j > 1; j--) {
            vector<vector<int> > let(5, vector<int>());
            for (int k = 0; k < fact(j) - 1; k++) {
                cout << pos[k] + (5 - j) << endl;
                char inp;
                cin >> inp;
                let[inp - 'A'].push_back(pos[k]);
            }
            for (int k = 0; k < 5; k++) {
                if (let[k].size() == fact(j - 1) - 1 &&
                    was.find((char)((int)'A' + k)) == was.end()) {
                    pos = let[k];
                    ans += (char)((int)'A' + k);
                    was.insert((char)((int)'A' + k));
                    break;
                }
            }
        }
        vector<int> c(5, 0);
        for (int j = 0; j < 4; j++) {
            c[ans[j] - 'A']++;
        }
        for (int j = 0; j < 5; j++) {
            if (c[j] == 0) {
                ans += (char)((int)'A' + j);
                break;
            }
        }
        cerr << ans << "\n";
        cout << ans << endl;
        char inp;
        cin >> inp;
        if (inp == 'N') {
            return 0;
        }
    }
    return 0;
}