#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n;
        long long sum = 0;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int t;
            cin >> t;
            sum += t;
        }
        cout << (sum + n - 1) / n << "\n";
    }
    return 0;
}