#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, k;
    in >> n >> k;
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    int res = 0;
    do {
        bool f = true;
        for (int i = 1; i < n; i++) {
            if (abs(a[i] - a[i - 1]) > k) {
                f = false;
                break;
            }
        }
        if (f) {
            res++;
        }
    } while (next_permutation(a.begin(), a.end()));
    out << res;
    return 0;
}