#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), prefix(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<int> nums;
    for (int i = n - 1; i >= 0; i--) {
        nums.insert(a[i]);
        prefix[i] = nums.size();
    }
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        cout << prefix[t - 1] << "\n";
    }
    return 0;
}