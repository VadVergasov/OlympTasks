#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (log2(n) == ceil(log2(n))) {
        cout << 1;
    } else {
        int i = 0;
        while (n) {
            n -= pow(2, floor(log2(n)));
            i++;
        }
        cout << i;
    }
    return 0;
}