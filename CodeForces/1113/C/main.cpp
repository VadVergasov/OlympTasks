#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), pref(n);
    cin >> a[0];
    pref[0] = a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        pref[i] = pref[i - 1] ^ a[i];
    }
    return 0;
}