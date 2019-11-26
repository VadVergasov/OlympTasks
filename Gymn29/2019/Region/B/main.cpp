#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b * 9) {
        cout << -1;
        return 0;
    }
    string mx = "", mn;
    while (b) {
        if (a < 9) {
            mx += to_string(a);
            a = 0;
        } else {
            mx += "9";
            a -= 9;
        }
        b--;
    }
    mn = mx;
    reverse(mn.begin(), mn.end());
    for (int i = mn.size() - 1; i >= 0; i--) {
        if (mx[i] < mn[i]) {
            mx[i] += 10;
            mx[i] -= mn[i] - '0';
            int j = i - 1;
            mx[j]--;
            while (mx[j] < '0') {
                mx[j] += 10;
                j--;
                mx[j]--;
            }
        } else {
            mx[i] -= mn[i] - '0';
        }
    }
    while (mx[0] == '0') {
        mx.erase(0, 1);
    }
    if (mx == "") {
        cout << 0;
        return 0;
    }
    cout << mx;
    return 0;
}