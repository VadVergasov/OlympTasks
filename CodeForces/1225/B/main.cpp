#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k, d, res = 100;
        cin >> n >> k >> d;
        vector<int> a(n);
        int first = 0;
        multiset<int> num;
        set<int> uniq;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            if (j == 0) {
                first = a[j];
            }
            num.insert(a[j]);
            uniq.insert(a[j]);
            if (j >= d - 1) {
                res = min(res, (int)uniq.size());
                num.erase(num.find(first));
                if (num.find(first) == num.end()) {
                    uniq.erase(first);
                }
                first = a[j - d + 2];
            }
        }
        /*for (int j = 0; j <= n - d; j++) {
            int count = 0;
            set<int> s;
            for (int k = 0; k < d; k++) {
                if (s.find(a[j + k]) == s.end()) {
                    s.insert(a[j + k]);
                    count++;
                }
            }
            res = min(res, count);
        }*/
        cout << res << "\n";
    }
    return 0;
}