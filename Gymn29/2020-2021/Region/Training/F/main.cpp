#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    ios_base::sync_with_stdio(0);
    in.tie(0);
    out.tie(0);
    int n, s, k;
    in >> n >> k >> s;
    vector<pair<long long, long long>> dp(n + 1, make_pair(10e9, -1));
    if (k == 0) {
        out << ceil((double)n / (double)s) << " " << n;
    } else {
        set<int> d;
        for (int i = 0; i < k; i++) {
            int t;
            in >> t;
            d.insert(t);
        }
        int mn = 0, i;
        for (i = 0; i < n; i += s) {
            mn++;
            while (d.find(i) != d.end()) {
                i--;
            }
        }
        if (i < n) {
            mn++;
        }
        out << mn << " " << n - k;
    }
    return 0;
}
