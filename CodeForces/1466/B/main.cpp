#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            mp[t]++;
        }
        for (auto i : mp) {
            if (i.second > 1) {
                mp[i.first + 1]++;
            }
        }
        cout << mp.size() << "\n";
    }
    return 0;
}
