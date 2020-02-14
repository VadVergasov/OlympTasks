#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("prizes.in");
    ofstream out("prizes.out");
    int n;
    in >> n;
    vector<int> a(n);
    for (auto &i : a) {
        in >> i;
    }
    int mx1 = min(a.front(), a[1]), mx2 = max(a.front(), a[1]);
    out << mx1 << " ";
    for (int i = 2; i < n; i++) {
        if (mx2 <= a[i]) {
            mx1 = mx2;
            mx2 = a[i];
        } else if (mx1 < a[i]) {
            mx1 = a[i];
        }
        out << mx1 << " ";
    }
    return 0;
}