// https://codeforces.com/contest/1303/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        string s;
        cin >> s;
        bool was = false;
        vector<int> num;
        int cur = 0, res = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0' && was) {
                cur++;
            } else if (s[i] == '1') {
                was = true;
                res += cur;
                cur = 0;
            }
        }
        cout << res << "\n";
    }
    return 0;
}