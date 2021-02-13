#include <bits/stdc++.h>

using namespace std;

int main() {
    long long k, a, b, x, y;
    cin >> k >> a >> x >> b >> y;
    cout << max({max((k - a) * x, 0LL) + max((k - a - b) * y, 0LL),
                 max((k - b) * y, 0LL) + max((k - a - b) * x, 0LL), 0LL});
    return 0;
}
