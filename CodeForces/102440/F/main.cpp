#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define inf 1e18

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> v(n);
    iota(all(v), 1);
    set<ll> st;
    for (auto i : v) {
        st.insert(i);
    }
    ll sum = 1LL * n * (n + 1) / 2;
    if (sum % 3 == 0) {
        bool can = 1;
        sum /= 3;
        vector<vector<ll> > v(3);
        ll cur_sum = 0, cnt = 0;
        while (cur_sum < sum && cnt < 3) {
            auto it = st.upper_bound(sum - cur_sum);
            if (it != st.begin()) {
                --it;
                cur_sum += *it;
                v[cnt].push_back(*it);
                st.erase(*it);
                if (cur_sum == sum) {
                    cur_sum = 0;
                    ++cnt;
                    if (cnt == 3) {
                        break;
                    }
                }
            } else {
                can = 0;
                break;
            }
        }
        if (can) {
            cout << "Possible" << endl;
            for (int i = 0; i < 3; ++i) {
                cout << v[i].size() << endl;
                for (auto j : v[i]) {
                    cout << j << " ";
                }
                cout << endl;
            }
        }
        if (!can) {
            cout << "Impossible";
            return 0;
        }
    } else {
        cout << "Impossible";
    }
    return 0;
}