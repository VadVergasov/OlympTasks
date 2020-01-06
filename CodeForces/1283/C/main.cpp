#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> f(n), d(n, 0), o;
    for (int i = 0; i < n; i++) {
        cin >> f[i];
        if (f[i] != 0) {
            d[f[i] - 1] = 1;
        } else {
            o.push_back(i);
        }
    }
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (d[i] == 0) {
            if (o[pos] == i) {
                if (pos == o.size() - 1) {
                    f[o[pos]] = i + 1;
                    swap(f[o[pos - 1]], f[o[pos]]);
                    continue;
                }
                swap(o[pos + 1], o[pos]);
                f[o[pos]] = i + 1;
            } else {
                f[o[pos]] = i + 1;
            }
            pos++;
        }
    }
    for (auto i : f) {
        cout << i << " ";
    }
    return 0;
}