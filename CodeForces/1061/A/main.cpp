#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s, res = 0, cur = 0;
    cin >> n >> s;
    while (cur + n < s) {
        cur += n;
        res++;
    }
    while (cur + n > s && cur != s && n > 0) {
        n--;
    }
    if (cur + n == s && n != 0) {
        res++;
    }
    cout << res;
    return 0;
}
