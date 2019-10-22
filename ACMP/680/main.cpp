#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<long long> a(n);
    a[0] = 3;
    for (int i = 1; i < n; i++) {
        a[i] = a[i - 1] * 2;
    }
    out << a[n - 1];
    return 0;
}