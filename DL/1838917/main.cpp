#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int res = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) >= 3) {
            res++;
        }
    }
    cout << res;
    return 0;
}