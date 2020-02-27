#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        long long n;
        cin >> n;
        set<int> a, b, c, d;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            a.insert(s[0] - 'a');
            b.insert(s[1] - 'a');
            c.insert(s[2] - 'a');
            d.insert(s[3] - 'a');
        }
        cout << 4 * n - a.size() - b.size() - c.size() - d.size() << "\n";
    }
    return 0;
}