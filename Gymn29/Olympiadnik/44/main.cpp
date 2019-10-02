#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("i.in");
    ofstream out("i.out");
    int n, k;
    in >> n >> k;
    long long res = 0;
    for (int i = 1; i <= n; i++) {
        res += ceil((floor(log2(i)) + 1 - __builtin_popcount(i)) / k);
    }
    out << res;
    return 0;
}