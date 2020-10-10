#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, res = 10e9, num = 0;
    cin >> n;
    double a, b, c;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        int count = ceil(a / (c - b));
        cout << count << endl;
        if (res == count) {
            continue;
        }
        res = min(count, res);
        if (res == count) {
            num = i + 1;
        }
    }
    cout << num;
    return 0;
}