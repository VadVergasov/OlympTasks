#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > a(n);
    for (int i = 0; i < n; i++) {
        int t1, t2;
        cin >> t1 >> t2;
        a[i] = make_pair(t1, t2);
    }
    int k = 0;
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (a[i].first <= k && a[i].second >= k) {
            cout << n - i;
            return 0;
        }
    }
    return 0;
}