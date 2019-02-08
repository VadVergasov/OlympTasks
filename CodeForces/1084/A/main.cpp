#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, tmp, res = 10e6;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < n; i++) {
        int t = 0;
        for (int j = 0; j < n; j++) {
            t += (abs(j - i) + abs(j + i)) * a[j];
        }
        res = min(res, t);
    }
    cout << res * 2;
    return 0;
}
