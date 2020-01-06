#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    set<char> c;
    for (int i = 0; i < k; i++) {
        char t;
        cin >> t;
        c.insert(t);
    }
    long long l = 0, pos = 0, res = 0;
    while (pos < s.size()) {
        if (c.find(s[pos]) != c.end()) {
            l++;
        } else {
            res += l * (l + 1) / 2;
            l = 0;
        }
        pos++;
    }
    res += l * (l + 1) / 2;
    cout << res;
    return 0;
}