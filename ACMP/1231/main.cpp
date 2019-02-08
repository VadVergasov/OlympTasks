#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, res = 0;
    in >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                res++;
            }
        }
    }
    out << res;
    return 0;
}