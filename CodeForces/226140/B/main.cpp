#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin >> n;
    vector<vector<int> > res(1e6 + 5, vector<int>(101, 0));
    for (long long i = 1; i < 1e6 + 5; i++) {
        long long sum = 0, num = i;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        res[i] = res[i - 1];
        res[i][sum]++;
    }
    for (long long i = 0; i < n; i++) {
        long long l, r, k;
        cin >> l >> r >> k;
        if (k > 100) {
            cout << "0 ";
            continue;
        }
        cout << res[r][k] - res[l - 1][k] << "\n";
    }
    return 0;
}
