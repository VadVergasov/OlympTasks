#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<long long> a(71);
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    a[4] = 7;
    for (int i = 5; i <= n; i++) {
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }
    out << a[n];
    return 0;
}