#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        string s = to_string(i);
        set<char> a;
        for (int j = 0; j < s.size(); j++) {
            a.insert(s[j]);
        }
        if (s.size() == a.size()) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}