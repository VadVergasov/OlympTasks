#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long double n, m, k, sum1 = 0, sum2 = 0;
    in >> n >> m >> k;
    vector<int> a(n), b(m);
    for (auto &i : a) {
        in >> i;
        sum1 += i;
    }
    for (auto &i : b) {
        in >> i;
        sum2 += i;
    }
    out << (long long)(1 + ceil(k / min(sum1, sum2)));
    return 0;
}