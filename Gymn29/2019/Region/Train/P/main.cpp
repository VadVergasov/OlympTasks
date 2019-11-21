#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    if (n * 9 < a) {
        cout << -1;
        return 0;
    }
    string res = "";
    while (n) {
        if (a < 9) {
            res += to_string(a);
            a = 0;
        } else {
            res += "9";
            a -= 9;
        }
        n--;
    }
    cout << res;
    return 0;
}