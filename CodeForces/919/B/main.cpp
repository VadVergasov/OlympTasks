#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    int cur = 1, i = 19;
    while (cur < k) {
        i += 9;
        int sum = 0, t = i;
        while (t) {
            sum += t % 10;
            t /= 10;
        }
        if (sum == 10) {
            cur++;
        }
    }
    cout << i;
    return 0;
}