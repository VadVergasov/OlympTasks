// https://codeforces.com/contest/1326/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    long long m = 998244353;
    cin >> n >> k;
    vector<pair<long long, int> > p(n);
    vector<int> pos;
    for (int i = 0; i < n; i++) {
        cin >> p[i].first;
        p[i].second = i + 1;
    }
    sort(rbegin(p), rend(p));
    long long sum = 0, res = 1;
    for (int i = 0; i < n && i < k; i++) {
        sum += p[i].first;
        pos.push_back(p[i].second);
    }
    sort(begin(pos), end(pos));
    for (int i = 1; i < pos.size(); i++) {
        res *= (pos[i] - pos[i - 1]);
        res %= m;
    }
    cout << sum << " " << res;
    return 0;
}