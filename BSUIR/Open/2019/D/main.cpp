#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, mn = 1e9;
    vector<int> pos;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, abs(a[i] - k));
        if (mn == abs(a[i] - k)) {
            pos.push_back(i);
        }
    }
    return 0;
}