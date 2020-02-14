#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int> > a(n);
    for (auto &i : a) {
        cin >> i.first.second;
    }
    for (auto &i : a) {
        cin >> i.first.first;
    }
    for (int i = 0; i < n; i++) {
        a[i].second = i + 1;
    }
    sort(a.rbegin(), a.rend());
    long long time = 0, mn = 1e9;
    for (int i = 0; i < n; i++) {
        mn = min(mn, a[i].first.first + time);
        time += a[i].first.second;
        if (time >= mn) {
            cout << -1;
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i].second << " ";
    }
    return 0;
}