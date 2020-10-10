#include <bits/stdc++.h>

using namespace std;

int rew[4] = {1000, 5000, 3000, 3000};
int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    long long res1 = 0, res2 = 0;
    int v, n;
    cin >> v >> n;
    if (v == 1) {
        mon[1]++;
    }
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        char t;
        cin >> a >> t >> b;
        int num = 0;
        for (int j = 0; j < b - 1; j++) {
            num += mon[j];
        }
        num += a;
        d[i] = num;
    }
    sort(d.begin(), d.end());
    int sec = 0;
    res1 = rew[0];
    for (int i = 1; i < n; i++) {
        if (d[i - 1] + 1 == d[i]) {
            sec++;
            if (sec % 5 == 4) {
                res2 += 3;
            } else {
                res1 += rew[sec % 5];
            }
        } else {
            sec = 0;
            res1 += rew[sec % 5];
        }
    }
    cout << res1 << " " << res2;
    return 0;
}