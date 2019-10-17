#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        string s, t;
        cin >> s >> t;
        set<char> a, b;
        vector<char> c(s.size());
        vector<char>::iterator it;
        for (int j = 0; j < s.size(); j++) {
            a.insert(s[j]);
            b.insert(t[j]);
        }
        it =
            set_intersection(a.begin(), a.end(), b.begin(), b.end(), c.begin());
        c.resize(it - c.begin());
        if (c.size() == 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}