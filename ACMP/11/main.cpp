#include <bits/stdc++.h>

using namespace std;

ofstream out("OUTPUT.TXT");
ifstream in("INPUT.TXT");

int main() {
    int k, n;
    cin >> k >> n;
    if (k == 1) {
        cout << 1;
        return 0;
    }
    vector<long long> a;
    a.resize(n + k, 0);
    a[k] = 1;
    for (int i = k + 1; i < 2 * k; i++) {
        for (int j = i - 1; j >= k; j--) {
            a[i] += a[j];
        }
        a[i]++;
    }
    for (int i = 2 * k; i < n + k; i++) {
        for (int j = 1; j <= k; j++) {
            a[i] += a[i - j];
        }
    }
    cout << a[a.size() - 1];
    return 0;
}
