#pragma GCC optimize("-O3")
#pragma GCC optimize("unroll-loops")

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

ll pows[15];

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM =
            chrono::system_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

void solve() {
    pows[0] = 1;
    for (int i = 1; i < 15; ++i) {
        pows[i] = pows[i - 1] * 10;
    }

    ll n;
    cin >> n;
    auto split = [&](ll n, int k) {
        ll sz = 0, cur = n;
        while (cur) {
            ++sz;
            cur /= 10;
        }
        if (k >= sz) {
            return -1LL;
        }
        cur = n;
        ll ans = 0;
        int firSz = k, secSz = sz - k;
        int ssz = firSz, szz = secSz;
        while (cur) {
            int dig = cur % 10;
            if (secSz) {
                ans -= (pows[szz - secSz]) * dig;
                --secSz;
            } else {
                ans += (pows[ssz - firSz] * dig);
                --firSz;
            }
            cur /= 10;
        }
        return llabs(ans);
    };
    ll res = n;
    unordered_map<ll, ll, custom_hash> prev;
    prev.reserve((1LL << 12));
    prev.max_load_factor(0.25);
    queue<ll> bfs;
    bfs.push(n);
    while (!bfs.empty()) {
        ll x = bfs.front();
        bfs.pop();
        ll new_x = x, sz = 0;
        while (new_x) {
            ++sz;
            new_x /= 10;
        }
        if (sz <= 1) {
            continue;
        }
        for (int i = max(1LL, (sz / 2) - 3); i <= min(sz - 1, (sz / 2) + 3);
             ++i) {
            ll cur = split(x, i);
            if (cur > 0) {
                prev[cur] = x;
                res = min(res, cur);
                bfs.push(cur);
            }
        }
    }
    ll o = res;
    vector<ll> ans;
    while (o != n) {
        ans.push_back(o);
        o = prev[o];
    }
    ans.push_back(n);
    reverse(all(ans));
    cout << ans.size() << " ";
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << '\n';
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