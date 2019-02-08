#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, tmp;
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    long long res = a[0] - 1;
    for (int i = 1; i < m; i++) {
        if (a[i] < a[i - 1]) {
            res += n - a[i - 1] + a[i];
        } else {
            res += a[i] - a[i - 1];
        }
    }
    cout << res;
    return 0;
}
