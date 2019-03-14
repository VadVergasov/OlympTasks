#include <bits/stdc++.h>

using namespace std;

int main() {
    long long res = 0;
    int n, k, cur;
    cin >> n >> k;
    cur = k - 1;
    vector<int> mp(n, 1);
    if (k > n / 2) {
        while (cur < n) {
            while (mp[cur] > 0) {
                if (cur == n - 1) {
                    mp[cur - 1]++;
                } else {
                    mp[cur - 1]++;
                }
                mp[cur]--;
                res++;
            }
            res += 2;
            cur++;
        }
        cur -= 2;
        while (cur > k - 2) {
            cur--;
            res++;
        }
        while (cur >= 0) {
            while (mp[cur] > 0) {
                mp[cur + 1]++;
                mp[cur]--;
                res++;
            }
            cur--;
            res += 2;
        }
    } else {
        while (cur >= 0) {
            while (mp[cur] > 0) {
                if (cur == 0) {
                    mp[cur + 1]++;
                } else {
                    mp[cur + 1]++;
                }
                mp[cur]--;
                res++;
            }
            cur--;
            res += 2;
        }
        cur += 2;
        while (cur < k) {
            cur++;
            res++;
        }
        while (cur < n) {
            while (mp[cur] > 0) {
                mp[cur - 1]++;
                mp[cur]--;
                res++;
            }
            cur++;
            res += 2;
        }
    }
    cout << res - 1;
    return 0;
}