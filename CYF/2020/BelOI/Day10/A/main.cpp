#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    vector<int> a, b, d;
    for (int i = 0; i < n; i++) {
        char t;
        int z;
        cin >> t >> z;
        if (t == 'E') {
            a.push_back(z);
        } else if (t == 'M') {
            b.push_back(z);
        } else {
            d.push_back(z);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(d.begin(), d.end());
    int res = 0;
    int i1 = 0, i2 = 0, i3 = 0;
    while (c - min({a[i1] + a[i1 + 1], a[i1] + d[i3], b[i2] + d[i3],
                    b[i2] + a[i1]}) >=
           0) {
        cout << a[i1] << " " << b[i2] << " " << d[i3] << endl;
        if (min({a[i1] + a[i1 + 1], a[i1] + d[i3], b[i2] + d[i3],
                 b[i2] + a[i1]}) == a[i1] + a[i1 + 1]) {
            i1 += 2;
            c -= a[i1] + a[i1 + 1];
        } else if (min({a[i1] + a[i1 + 1], a[i1] + d[i3], b[i2] + d[i3],
                        b[i2] + a[i1]}) == a[i1] + d[i3]) {
            i1++;
            i3++;
            c -= a[i1] + d[i3];
        } else if (min({a[i1] + a[i1 + 1], a[i1] + d[i3], b[i2] + d[i3],
                        b[i2] + a[i1]}) == b[i2] + d[i3]) {
            i2++;
            i3++;
            c -= b[i2] + d[i3];
        } else if (min({a[i1] + a[i1 + 1], a[i1] + d[i3], b[i2] + d[i3],
                        b[i2] + a[i1]}) == b[i2] + a[i1]) {
            i1++;
            i2++;
            c -= b[i2] + a[i1];
        }
        res++;
    }
    cout << res;
    return 0;
}