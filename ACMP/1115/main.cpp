#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, k;
    in >> n >> k;
    out << k / n << " " << k % n << " "
        << (((k % n) == 0) ? 0 : ((n + k) / n * n - k));
    return 0;
}