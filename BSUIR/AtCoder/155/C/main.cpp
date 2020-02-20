#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        mp[t]++;
    }
    int mx = 0;
    for (auto i : mp) {
        mx = max(mx, i.second);
    }
    for (auto i : mp) {
        if (i.second == mx) {
            cout << i.first << "\n";
        }
    }
    return 0;
}