#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    if (s.front() == 'x') {
        long long sum = 0;
        for (int i = 1; i < n; i++) {
            int cur = s[i] - '0';
            if ((i - 1) % 2 == 0) {
                cur <<= 1;
            }
            if (cur > 9) {
                cur = cur / 10 + cur % 10;
            }
            sum += cur;
        }
        cout << (sum * 9) % 10;
    } else {
        long long sum = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] == 'x') {
                continue;
            }
            int cur = s[i] - '0';
            if ((i - 1) % 2 == 0) {
                cur <<= 1;
            }
            if (cur > 9) {
                cur = cur / 10 + cur % 10;
            }
            sum += cur;
        }
        int res = 0;
        while ((sum + res) * 9 % 10 != s.front() - '0') {
            res++;
        }
        cout << res;
    }
    return 0;
}