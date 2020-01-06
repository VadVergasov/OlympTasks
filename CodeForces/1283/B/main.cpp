#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int p = 0; p < q; p++) {
        int n, k;
        cin >> n >> k;
        int a = n / k;
        cout << min(n, (int)(a * ceil((double)k / 2.0) + (a + 1) * (k / 2)))
             << "\n";
    }
    return 0;
}