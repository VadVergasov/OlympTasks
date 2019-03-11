#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    unordered_map<long long, int> dif;
    for (int i = 0; i < n; i++) {
        dif[abs(a[i] - b[i])]++;
    }
    int x, count = 0;
    for (auto i : dif) {
        count = max(count, i.second);
        if (count == i.second) {
            x = i.first;
        }
    }
    for (int i = 0; i < n; i++) {
        a[i] += x;
    }
    multiset<long long> r;
    for (int i = 0; i < n; i++) {
        r.insert(abs(a[i] - b[i]));
    }
    r.erase(next(r.begin(), n - k), r.end());
    long long res = 0;
    for (auto i : r) {
        res += i;
    }
    cout << res;
    return 0;
}