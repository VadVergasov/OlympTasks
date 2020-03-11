// https://codeforces.com/contest/1323/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int balance = 0, res = 0, last = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            balance++;
        }
        if (s[i] == ')') {
            balance--;
        }
        if (balance < 0 || last == i - 1 && balance == 0) {
            res++;
            last = i;
        }
    }
    if (balance != 0) {
        cout << -1;
        return 0;
    }
    cout << res;
    return 0;
}