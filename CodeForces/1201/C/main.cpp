#include <bits/stdc++.h>

using namespace std;

int main() {
    long long sum = 0;
    int n, k, cur;
    cin >> n >> k;
    cur = n - 1;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (n == 1) {
        cout << a.front() + k;
        return 0;
    }
    sort(a.begin(), a.end());
    a[n / 2 - 1] = a.back();
    while (k > 0 && cur >= n / 2) {
        if (a[cur] > a[cur - 1]) {
            cur--;
        } else {
            a[cur]++;
            k--;
        }
    }
    if (k != 0) {
        a[n / 2] += k / ceil(n / 2.0);
    }
    cout << a[n / 2];
    return 0;
}
