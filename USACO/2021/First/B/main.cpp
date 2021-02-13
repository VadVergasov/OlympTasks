#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    map<pair<int, int>, int> mp;
    set<int> x, y;
    for (int i = 0; i < n; i++) {
        int x0, y0;
        cin >> x0 >> y0;
        mp[{x0, y0}] = i + 1;
        x.insert(x0);
        y.insert(y0);
    }
    set<set<int> > all;
    for (auto x0 : x) {
        for (auto y0 : y) {
            for (auto x1 : x) {
                for (auto y1 : y) {
                    pair<int, int> first = {x0, y0}, second = {x1, y1};
                    set<int> cur;
                    for (auto k : mp) {
                        if (min(first.first, second.first) <= k.first.first &&
                            max(first.first, second.first) >= k.first.first &&
                            min(first.second, second.second) <=
                                k.first.second &&
                            max(first.second, second.second) >=
                                k.first.second) {
                            cur.insert(k.second);
                        }
                    }
                    all.insert(cur);
                }
            }
        }
    }
    cout << all.size();
    return 0;
}
