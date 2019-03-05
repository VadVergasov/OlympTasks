#include <bits/stdc++.h>

using namespace std;

set<long long> num;

int main() {
    ifstream cin("t.i");
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cout << n << " ";
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        num.insert(t);
    }
    unsigned long long sum = 0;
    int m;
    cin >> m;
    cout << m << "\n";
    double s = clock();
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        sum += (*next(num.begin(), n));
    }
    double e = clock();
    cout << sum << " ";
    cout << (double)(e - s) / CLOCKS_PER_SEC;
    return 0;
}