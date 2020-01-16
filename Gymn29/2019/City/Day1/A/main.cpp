#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y;
    cin >> x >> y >> n;
    vector<int> c(n);
    for (auto &i : c) {
        cin >> i;
    }
    sort(c.begin(), c.end());
    if (x < y || x < c.front()) {
        cout << x;
        return 0;
    }
    x = max(y, c.front());
    x -= x / c.front();
    cout << x;
    return 0;
}