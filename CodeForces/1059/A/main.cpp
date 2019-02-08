#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l, a, tmp1, tmp2;
    cin >> n >> l >> a;
    if (n == 0) {
        cout << l / a;
        return 0;
    }
    vector<pair<int, int> > b;
    for (int i = 0; i < n; i++) {
        cin >> tmp1 >> tmp2;
        b.push_back(make_pair(tmp1, tmp2));
    }
    int res = 0;
    res += b[0].first / a;
    for (int i = 0; i < n - 1; i++) {
        res += (b[i + 1].first - b[i].first - b[i].second) / a;
    }
    res += (l - b[b.size() - 1].first - b[b.size() - 1].second) / a;
    cout << res;
    return 0;
}
