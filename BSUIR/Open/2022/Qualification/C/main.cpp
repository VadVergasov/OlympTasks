#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define inf 1e18

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;

void solve() {
    ll n;
    cin >> n;
    vector<int> dec;
    vector<int> dig{4, 6, 7, 9, 0};
    while (n) {
        dec.push_back(n % 10);
        n /= 10;
    }
    n = dec.size();
    reverse(all(dec));
    vector<vector<ll> > dp(n + 1, vector<ll>(2));
    dp[0][1] = 1;
    for (int i = 0; i < n; ++i) {
        for (int fl = 0; fl < 2; ++fl) {
            for (auto x : dig) {
                if ((x > dec[i] && fl == 1)) {
                    continue;
                }
                dp[i + 1][fl & (x == dec[i])] += dp[i][fl];
            }
        }
    }
    cout << dp[n][1] + dp[n][0] << '\n';
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //	ifstream cin("input.txt");
    //	ofstream cout("output.txt");
    int q = 1;
    cin >> q;
    while (q--) {
        solve();
    }
}