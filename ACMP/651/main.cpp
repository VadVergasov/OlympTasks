#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n, m, nok, f = 0, s = 0;
    in >> n >> m;
    nok = n / __gcd(n, m) * m;
    long long a = nok / n, b = nok / m;
    for (int i = 2; i <= sqrt(a); i++) {
        while (a % i == 0) {
            f++;
            a /= i;
        }
    }
    if (a > 1) {
        f++;
    }
    for (int i = 2; i <= sqrt(b); i++) {
        while (b % i == 0) {
            s++;
            b /= i;
        }
    }
    if (b > 1) {
        s++;
    }
    out << f + s;
    return 0;
}
