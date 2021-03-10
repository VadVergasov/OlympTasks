#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<long long, long long> > tasks(n);
    vector<long long> q(n), t(n);
    for (auto &i : tasks) {
        cin >> i.first;
    }
    for (auto &i : q) {
        cin >> i;
    }
    for (auto &i : tasks) {
        cin >> i.second;
    }
    for (auto &i : t) {
        cin >> i;
    }
    vector<long long> dp((1 << n), 0);
    for (int i = 0; i < 1 << n; i++) {
        long long time = 0, num = 0, cur = i;
        while (cur) {
            if (cur % 2) {
                time += t[num];
            }
            cur >>= 1;
            num++;
        }
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                continue;
            }
            dp[i | (1 << j)] =
                max(dp[i | (1 << j)],
                    dp[i] + max(tasks[j].second,
                                tasks[j].first - (time + t[j]) * q[j]));
        }
    }
    cout << dp.back();
    return 0;
}
