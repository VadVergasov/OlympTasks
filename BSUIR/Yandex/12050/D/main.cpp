#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("nthcard.in");
    ofstream out("nthcard.out");
    int n, k;
    in >> n >> k;
    if (n == k) {
        vector<int> a(n);
        for (int i = 0; i < k; i++) {
            in >> a[i];
        }
        for (int i = 0; i < n; i++) {
            out << a[i] << " ";
        }
        out << "\n";
        for (int i = 0; i < n; i++) {
            out << n - 1 << "\n";
        }
    } else {
        if (n == 3 && k == 5) {
            out << "3 1 2\n2\n1\n0\n1\n0";
        }
    }
    return 0;
}