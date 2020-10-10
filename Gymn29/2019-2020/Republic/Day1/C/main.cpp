#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, lowest = 0, middle = 2, biggest = n + 1;
    cin >> n >> k;
    vector<int> res(n);
    res[0] = 1;
    res[n - 1] = n;
    for (int i = 1; i < n - 1; i++) {
        cout << "1 " << n << " " << i + 1 << endl;
        int r;
        cin >> r;
        if (r == 1) {
            res[i] = lowest;
            lowest--;
        } else if (r == n) {
            res[i] = biggest;
            biggest++;
        } else {
            res[i] = middle;
            middle++;
        }
    }
    return 0;
}