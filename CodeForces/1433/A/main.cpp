#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int res = 0;
        res += (((x % 10) - 1) * 10);
        res += (to_string(x).size()) * (to_string(x).size() + 1) / 2;
        cout << res << "\n";
    }
    return 0;
}
