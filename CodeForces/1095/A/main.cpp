#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p = 1;
    cin >> n;
    while (p / 2.0 * (p + 1) < n) {
        p++;
    }
    string s, res = "";
    cin >> s;
    for (int i = 1; i <= p; i++) {
        res += s[i / 2.0 * (i + 1) - 1];
    }
    cout << res;
    return 0;
}
