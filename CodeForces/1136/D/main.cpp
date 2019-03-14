#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    map<int, int> q;
    for (int i = 0; i < m; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        q[t1] = t2;
    }
    int res = 0, na = p.back(), pos = n - 1;
    while (true) {
        auto f = q.find(p[pos - 1]);
        if (f == q.end()) {
            break;
        }
        while (f != q.end()) {
            if (f->second != na) {
                f = q.find(p[pos - 1]);
            } else {
                swap(p[pos], p[pos - 1]);
                pos--;
                break;
            }
        }
        res++;
    }
    cout << res;
    return 0;
}