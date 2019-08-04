#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, tmp, c = 0, res = 0;
    cin >> n >> k;
    vector<int> a(k);
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[tmp - 1]++;
    }
    sort(a.rbegin(), a.rend());
    int i = 0;
    while (c < k && i < ceil(n / 2.0)) {
        if (a[c] > 1) {
            res += 2;
            a[c] -= 2;
            i++;
        } else {
            c++;
        }
    }
    if (i < ceil(n / 2.0)) {
        res += ceil(n / 2.0) - i;
    }
    cout << res;
    return 0;
}