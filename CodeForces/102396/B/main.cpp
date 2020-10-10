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
    ll n, m, s;
    cin >> n >> m >> s;
    vector<vector<int> > del(m);
    for (int i = 0; i < n; ++i) {
        ll l, r, x;
        cin >> x >> l >> r;
        --l;
        --r;
        if (x >= 0)
            del[r].push_back(x);
        else
            del[l].push_back(x);
    }
    for (int i = 0; i < m; ++i) {
        sort(all(del[i]));
        debug() << imie(i) imie(del[i]);

        for (int j = 0; j < del[i].size(); ++j) {
            s += del[i][j];
            if (s < 0) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
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