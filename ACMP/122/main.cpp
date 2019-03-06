#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    for (int i = 0; i < n; i++) {
        b[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                b[i] = max(b[i], b[j] + 1);
            }
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        res = max(res, b[i]);
    }
    out << res;
    return 0;
}