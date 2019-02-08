#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, tmp, sum = 0, tsum, res = 0;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
        sum += tmp;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            tsum = sum;
            for (int k = j; k <= i; k++) {
                tsum -= a[k] - 1 + a[k];
            }
            res = max(res, tsum);
        }
    }
    cout << res;
    return 0;
}
