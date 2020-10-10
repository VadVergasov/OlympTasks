#include <bits/stdc++.h>
#define ll long long
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
using namespace std;
const int tINF = (int)INT_MAX;
const long long lINF = (long long)LLONG_MAX;
const ll MOD = (ll)1e9 + 7LL;

void f() {
    string s;
    cin >> s;
    set<char> st;
    for (auto i : s) st.insert(i);
    ll ans = 1;
    ll c = 26;
    for (int i = 0; i < (int)st.size(); ++i) {
        ans *= c;
        ans %= MOD;
        --c;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--) f();
    cerr << "Time execute: " << (double)clock() / (double)CLOCKS_PER_SEC
         << " sec" << endl;
}