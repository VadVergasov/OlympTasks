#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long res = 10e9;
        int dif[3] = {-1, 0, 1};
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                for (int z = 0; z < 3; z++) {
                    res = min(res, abs(a + dif[j] - b - dif[k]) +
                                       abs(a + dif[j] - c - dif[z]) +
                                       abs(b + dif[k] - c - dif[z]));
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}