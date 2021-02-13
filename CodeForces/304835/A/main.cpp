#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> k >> n;
    if (k == 2) {
        long long res = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (ceil(sqrt(i * i + j * j)) == floor(sqrt(i * i + j * j)) &&
                    ceil(sqrt(i * i + j * j)) <= n) {
                    res++;
                }
            }
        }
        cout << res;
    } else {
        cout << 0;
    }
    return 0;
}
