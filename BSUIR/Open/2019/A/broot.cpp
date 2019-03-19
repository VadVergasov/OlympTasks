#include <bits/stdc++.h>

using namespace std;

vector<long long> res;

int main() {
    long long sum = 0;
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = -1000; j < 1001; j++) {
            res.push_back(sum - a[i] + j * a[i]);
        }
    }
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++) {
        if (res[i] >= 0 && res[i] % 2 == 0) {
            cout << res[i];
            return 0;
        }
    }
    return 0;
}