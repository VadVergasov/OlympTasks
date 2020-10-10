#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int mx = 0;
    string res = "";
    for (int i = 0; i < n; i++) {
        int a;
        string b, c;
        cin >> a >> b >> c;
        if (c == "Russia") {
            mx = max(mx, a);
            if (mx == a) {
                res = b;
            }
        }
    }
    cout << res;
    return 0;
}