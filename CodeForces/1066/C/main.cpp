#include <bits/stdc++.h>

using namespace std;

int a[200000];

int main() {
    ios_base::sync_with_stdio(false);
    int q, cl = 0, cr = 0;
    cin >> q;
    int l = 199999, r = 0;
    for (int i = 0; i < q; i++) {
        char tmp;
        cin >> tmp;
        if (i == 0) {
            int num;
            cin >> num;
            a[num] = cl;
            cl--;
            cr++;
        } else if (tmp == 'L') {
            int num;
            cin >> num;
            a[num] = cl;
            cl--;
        } else if (tmp == 'R') {
            int num;
            cin >> num;
            a[num] = cr;
            cr++;
        } else {
            int num;
            cin >> num;
            cout << min(abs(a[num] - cl), abs(a[num] - cr)) - 1 << "\n";
        }
    }
    return 0;
}
