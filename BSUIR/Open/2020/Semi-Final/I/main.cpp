#include <bits/stdc++.h>
#define ll long long
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
using namespace std;
const int tINF = (int)INT_MAX;
const long long lINF = (long long)LLONG_MAX;
ll binPow(ll a, ll n) {
    ll res = 1;
    while (n) {
        if (n & 1) res *= a;
        a *= a;
        n >>= 1;
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifdef DEBUG
    assert(freopen("inp", "r", stdin));
    assert(freopen("out", "w", stdout));
#else
#define cerr \
    if (false) cerr
#endif
    ll n, a;
    cin >> n >> a;
    if (n == 1) {
        cout << binPow(a, binPow(2LL, n)) % binPow(2LL, n + 2) << '\n';
    } else if (n <= 2 && a <= 2) {
        cout << binPow(a, binPow(2LL, n)) % binPow(2LL, n + 2) << '\n';
    } else
        cout << a % 2 << '\n';
    cerr << "Time execute: " << (double)clock() / (double)CLOCKS_PER_SEC
         << " sec" << endl;
}