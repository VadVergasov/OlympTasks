#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    while (cin >> t) {
        s += t;
    }
    vector<int> alp(26);
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) {
            alp[s[i] - 'a']++;
        } else {
            cout << -1;
            return 0;
        }
    }
    long long res = 0;
    for (int i = 0; i < alp.size(); i++) {
        if (alp[i] > 1) {
            res += alp[i] - 1;
        }
    }
    cout << res;
    return 0;
}