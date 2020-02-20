#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < k && a.size() / 2 + i < n; i++) {
        a[a.size() / 2 + i]++;
    }
    sort(a.begin(), a.end());
    cout << a[a.size() / 2];
    return 0;
}