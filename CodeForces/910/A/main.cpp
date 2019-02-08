#include <bits/stdc++.h>

using namespace std;

int main() {
    bool b = false;
    int n, d, tmp, res = 0, cur = 0, pre;
    cin >> n >> d;
    string a;
    cin >> a;
    while (true) {
        pre = cur;
        for (int i = cur + d; i >= cur; i--) {
            if (a[i] == '1') {
                cur = i;
                res++;
                break;
            }
        }
        if (cur + 1 == n) {
            b = true;
            break;
        }
        if (pre == cur) {
            break;
        }
    }
    if (b) {
        cout << res;
    } else {
        cout << -1;
    }
    return 0;
}
