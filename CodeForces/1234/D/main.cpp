#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<set<int> > alp(26);
    for (int i = 0; i < s.size(); i++) {
        alp[s[i] - 'a'].insert(i);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            int pos;
            char c;
            cin >> pos >> c;
            pos--;
            alp[s[pos] - 'a'].erase(pos);
            s[pos] = c;
            alp[c - 'a'].insert(pos);
        } else {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            int res = 0;
            for (int j = 0; j < 26; j++) {
                auto it = alp[j].lower_bound(l);
                if (it != alp[j].end() && *it <= r) {
                    res++;
                }
            }
            cout << res << "\n";
        }
    }
    return 0;
}