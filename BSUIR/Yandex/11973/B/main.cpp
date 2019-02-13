#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, res = 0;
    cin >> n;
    set<int> a, difs;
    for (int i = 0; i < n; i++) {
        cin >> t;
        a.insert(t);
    }
    for (auto i : a) {
        for (auto j : a) {
            if (j == i) {
                continue;
            }
            difs.insert(abs((i) - (j)));
        }
    }
    for (auto i : difs) {
        for (set<int>::iterator j = a.begin(); j != a.end(); j++) {
            int k = 1, cur = (*j);
            while (a.find(cur + i) != a.end()) {
                k++;
                cur += i;
            }
            res = max(res, k);
        }
    }
    cout << res;
    return 0;
}