#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, M;
    cin >> n >> M;
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        long long res = 1;
        for (int j = 0; j < b; j++) {
            res *= (a % M);
            res %= M;
        }
        cout << res << " ";
    }
    return 0;
}