// https://codeforces.com/contest/1328/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, cur = 1, first, second;
        cin >> n >> k;
        int cnt = 1;
        first = n - 2;
        second = n - 1;
        while (cur + cnt <= k) {
            first--;
            cur += cnt;
            cnt++;
        }
        while (cur + 1 <= k && second - 1 > first) {
            cur++;
            second--;
        }
        if (cur + 1 == k) {
            first--;
        }
        // cout << first << " " << second << "\n";
        string res = "";
        for (int i = 0; i < n; i++) {
            res += "a";
        }
        res[first] = 'b';
        res[second] = 'b';
        cout << res << "\n";
    }
    return 0;
}