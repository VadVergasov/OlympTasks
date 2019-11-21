#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a, b, n, k;
    in >> a >> b >> n >> k;
    for (int i = 0; i < n; i++) {
        string t = to_string(a + i * b);
        if (k <= t.size()) {
            out << t[k - 1];
            return 0;
        }
        k -= t.size();
    }
    out << -1;
    return 0;
}