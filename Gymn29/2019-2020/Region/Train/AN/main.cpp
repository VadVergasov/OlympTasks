#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    long long res = -n + 1;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        res += t;
    }
    cout << res;
    return 0;
}