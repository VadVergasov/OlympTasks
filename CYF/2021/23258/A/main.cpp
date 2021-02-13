#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;
    vector<int> c(n);
    for (auto &i : c) {
        cin >> i;
    }
    sort(c.begin(), c.end());
    if (*c.begin() < y && y < x) {
        x = y;
    } else if (*c.begin() > y && *c.begin() < x) {
        x = *c.begin();
    }
    if (x >= y) {
        x -= floor(x / (*c.begin()));
    }
    cout << x;
    return 0;
}
