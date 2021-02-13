#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x, cnt = 0;
    long long sum = 0;
    cin >> n >> x;
    vector<long long> res(n);
    for (int i = 0; i < n; i++) {
        if (x > 0) {
            res[i] = x;
            sum += x;
            x--;
        } else {
            cnt++;
            res[i] = 1;
        }
    }
    if (cnt % 2 == 1) {
        sum--;
    }
    cout << sum << "\n";
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}