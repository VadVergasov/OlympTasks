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
    for (int i = n - 1; i > 0; i--) {
        if (a[i] > a[i - 1]) {
            a[i - 1] = a[i];
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        res += a[i];
    }
    out << res;
    return 0;
}
