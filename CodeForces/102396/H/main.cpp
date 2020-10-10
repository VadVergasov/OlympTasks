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
#define dor > debug &operator<<
#define eni(x)                                                                \
    sim > typename enable_if<sizeof dud<c>(0) x 1, debug &>::type operator<<( \
              c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c *x) -> decltype(cerr << *x, 0);
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
    sim dor(const c &) { ris; }
#endif
}
;
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int m;
    cin >> m;
    vector<string> v(m);
    for (auto &i : v) cin >> i;

    auto similiar = [&](string &a, string &b) {
        int ar[4] = {0};
        for (int i = 0; i < n; ++i) {
            if (a[i] == b[i] && a[i] == s[i]) ++ar[0];
            if (a[i] == b[i] && a[i] != s[i]) ++ar[1];
            if (a[i] == s[i]) ++ar[2];
            if (a[i] != s[i]) ++ar[3];
        }
        if (!(ar[0] > ar[2] / 2 && ar[1] > ar[3] / 2)) return false;
        ar[2] = ar[3] = 0;

        for (int i = 0; i < n; ++i) {
            if (b[i] == s[i])
                ++ar[2];
            else
                ++ar[3];
        }
        return (ar[0] > ar[2] / 2 && ar[1] > ar[3] / 2);
    };

    vector<pair<int, int> > ans;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < i; ++j) {
            if (similiar(v[i], v[j])) {
                ans.push_back({j, i});
            }
        }
    }
    cout << ans.size() << '\n';
    for (auto i : ans) cout << i.fi + 1 << " " << i.se + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //	ifstream cin("input.txt");
    //	ofstream cout("output.txt");
    int q = 1;  // cin >> q;
    while (q--) solve();
}
