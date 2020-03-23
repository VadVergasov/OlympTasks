#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n, res = 0;
    in >> n;
    long long i = 1;
    while (i * i <= n) {
        res += (i * i - (i - 1) * (i - 1)) * i;
        i++;
    }
    res += (long long)(ceil(sqrt(n))) * (n - ((i - 1) * (i - 1)));
    i = 1;
    while ((i + 1) * (i + 1) * (i + 1) <= n) {
        res += ((i + 1) * (i + 1) * (i + 1) - i * i * i) * i;
        i++;
    }
    res += (long long)(floor(cbrt(n))) * (n - i * i * i + 1);
    out << res;
    return 0;
}