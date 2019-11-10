#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<long long> a(n + 1, 0);
    a[0] = 1;
    a[1] = 1;
    a[2] = 2;
    for (int i = 3; i < n + 1; i++) {
        a[i] += a[i - 1] + a[i - 3];
    }
    out << a[n];
    return 0;
}
