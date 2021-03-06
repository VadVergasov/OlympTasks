// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include <bits/stdc++.h>
#define fi first
#define se second
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define inf 1e18

using namespace std;

#define sim template <class c
#define ris return *this
#define dor > debug& operator<<
#define eni(x)                                                               \
    sim > typename enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<( \
              c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
    ~debug() { cerr << endl; }
    eni(!=) cerr << boolalpha << i;
    ris;
} eni(==) ris << range(begin(i), end(i));
}
sim, class b dor(pair<b, c> d) {
    ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
    *this << "[";
    for (auto it = d.b; it != d.e; ++it) *this << ", " + 2 * (it == d.b) << *it;
    ris << "]";
}
#else
    sim dor(const c&) { ris; }
#endif
}
;
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

void solve() {
    int n, k;
    cin >> n >> k;
    cin.ignore();

    map<string, ll> played, score;
    for (int i = 0; i < k; ++i) {
        string s;
        getline(cin, s, '\n');

        string a, b, c;
        ll x, y;
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] == ':') {
                int pos = j, pos1 = j;
                while (s[pos] != ' ' && ~pos) --pos;
                while (s[pos1] != ' ' && pos1 < s.size()) ++pos1;

                ++pos;
                --pos1;
                c = s.substr(pos, pos1 - pos + 1);

                a = s.substr(0, pos - 1);
                b = s.substr(pos1 + 2, s.size() - (pos1 + 2));

                string f = c.substr(0, j - pos);

                int h = 0;
                for (int k = 0; k < c.size(); ++k) {
                    if (c[k] == ':') {
                        h = k;
                        break;
                    }
                }
                string f1 = c.substr(h + 1, pos1 - (h + 1));

                x = stoll(f), y = stoll(f1);
                break;
            }
        }

        ++played[a];
        ++played[b];
        if (x > y)
            score[a] += 3;
        else if (y > x)
            score[b] += 3;
        else
            ++score[a], ++score[b];
    }

    vector<pair<ld, string> > f;
    for (auto i : played) {
        string team = i.fi;
        int sc = played[team];
        f.push_back({(ld)score[team] / (ld)sc, team});
    }

    map<ld, vector<string> > mp;
    for (auto i : f) mp[i.fi].push_back(i.se);
    for (auto& i : mp) sort(all(i.se)), reverse(all(i.se));

    f.clear();
    for (auto i : mp) {
        for (auto j : i.se) {
            f.push_back({i.fi, j});
        }
    }
    reverse(all(f));

    for (auto i : f) {
        cout << fixed << setprecision(5) << i.se << " " << i.fi << '\n';
    }
    for (int cnt = 0; cnt < n - f.size(); ++cnt) {
        cout << fixed << setprecision(5) << "UnknownTeam_" << (char)(cnt + 'A')
             << " " << -1.0 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //  ifstream cin("input.txt");
    //  ofstream cout("output.txt");
    int q = 1;  // cin >> q;
    while (q--) solve();
}