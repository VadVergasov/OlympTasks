#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int pos = 0, otr = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) {
            pos++;
        } else if (a[i] < 0) {
            otr++;
        }
    }
    sort(a.begin(), a.end());
    if (pos >= ceil(n / 2.0)) {
        cout << 1;
    } else if (otr >= ceil(n / 2.0)) {
        cout << -1;
    } else {
        cout << 0;
    }
    return 0;
}