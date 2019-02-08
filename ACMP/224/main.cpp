#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, tmp;
    cin >> n;
    vector<long long> a, b;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    if (n > 5) {
        for (int i = 0; i < 3; i++) {
            b.push_back(a[i]);
            b.push_back(a[a.size() - 1 - i]);
        }
    } else {
        b = a;
    }
    long long mx = -10e12, res;
    do {
        mx = max((long long)(abs(b[0] * b[1] * b[2])), mx);
    } while (next_permutation(b.begin(), b.end()));
    do {
        if (mx == abs(b[0] * b[1] * b[2])) {
            res = b[0] * b[1] * b[2];
            break;
        }
    } while (next_permutation(b.begin(), b.end()));
    cout << res;
    return 0;
}
