#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cur = 0, mn = 0, res = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            cur++;
        } else {
            cur--;
        }
        mn = min(mn, cur);
    }
    if (cur == 2 && mn == 0) {
        cur = 0;
        mn = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ')') {
                cur++;
            } else {
                cur--;
                res++;
            }
            mn = min(mn, cur);
            if (mn < 0) {
                break;
            }
        }
    } else if (cur == -2 && mn > -3) {
        cur = 0;
        mn = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                cur++;
            } else {
                cur--;
                res++;
            }
            mn = min(mn, cur);
            if (mn < 0) {
                break;
            }
        }
    }
    cout << res;
    return 0;
}
