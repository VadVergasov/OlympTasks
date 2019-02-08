#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, s, p;
    cin >> k >> n >> s >> p;
    int ls = ceil((double)n / (double)s);
    int t = ls * k;
    int res = ceil((double)t / (double)p);
    cout << res;
    return 0;
}
