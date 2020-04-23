// https://codeforces.com/contest/1335/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        char cur = 'a';
        string s = "";
        for (int i = 0; i < n; i++) {
            s += cur;
            cur++;
            if (cur - 'a' + 1 > b) {
                cur = 'a';
            }
        }
        cout << s << "\n";
    }
    return 0;
}