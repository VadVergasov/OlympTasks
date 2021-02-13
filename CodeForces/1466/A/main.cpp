#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> x(n);
        for (auto &i : x) {
            cin >> i;
        }
        set<int> s;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                s.insert(x[i] - x[j]);
            }
        }
        cout << s.size() << "\n";
    }
    return 0;
}
