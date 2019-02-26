#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int m = 1;
    bool f = true;
    while (f) {
        int cur = n * m + 1;
        for (int i = 2; i <= sqrt(cur); i++) {
            if (cur % i == 0) {
                f = false;
            }
        }
        m++;
    }
    cout << m - 1;
    return 0;
}