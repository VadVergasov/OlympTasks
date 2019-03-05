#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 8) {
        cout << 0;
        return 0;
    }
    vector<int> d(n), b;
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    sort(d.begin(), d.end());
    sort(b.begin(), b.end());
    b = d;
    int res = 0;
    do {
        do {
            vector<int> t1 = d;
            int t = n;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < t1.size(); j++) {
                    if (b[i] == t1[j] || b[i] + 1 == t1[j] ||
                        b[i] - 1 == t1[j]) {
                        t--;
                        t1.erase(t1.begin() + j);
                        break;
                    }
                }
            }
            res = max(res, t);
        } while (next_permutation(b.begin(), b.end()));
    } while (next_permutation(d.begin(), d.end()));
    cout << res;
    return 0;
}