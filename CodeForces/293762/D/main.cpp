#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> res;
        res.insert(0);
        for (int i = 1; i <= sqrt(n); i++) {
            res.insert(i);
            res.insert(n / i);
        }
        cout << res.size() << "\n";
        for (auto i : res) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}