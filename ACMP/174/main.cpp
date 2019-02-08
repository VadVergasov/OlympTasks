#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    double m;
    in >> m;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (m > (m + a[i]) / 2.0) {
            continue;
        }
        m = (m + a[i]) / 2.0;
    }
    out << fixed << setprecision(6) << (double)m;
    return 0;
}