#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    int mx = 0;
    for (auto &i : s) {
        cin >> i;
        mx = max(mx, (int)i.size());
    }
    for (auto i : s) {
        if (i.size() == mx) {
            cout << i;
            return 0;
        }
    }
    return 0;
}
