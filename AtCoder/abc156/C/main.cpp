#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<int> x(n);
    for (auto &i : x) {
        cin >> i;
    }
    long long res = 1e9;
    for (int i = 0; i < 100; i++) {
        long long sum = 0;
        for (auto j : x) {
            sum += (i - j) * (i - j);
        }
        res = min(res, sum);
    }
    cout << res;
    return 0;
}