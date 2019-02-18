#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<int> a(n), res(n, 0);
    for (int i = 0; i < n; i++) {
        in >> a[i];
        if (a[i] > i) {
            out << "NO";
            return 0;
        }
    }
    int cur = n;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == 0) {
            res[i] = cur;
            cur--;
            for (int j = i; j < n; j++) {
                a[j]--;
            }
            i = n;
        }
    }
    for (int i = 0; i < n; i++) {
        out << res[i] << "\n";
    }
    return 0;
}