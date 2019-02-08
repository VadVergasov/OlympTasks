#include <bits/stdc++.h>

using namespace std;

ofstream out("output.txt");
ifstream in("input.txt");

long long dif(long long n) {
    long long a = 1, b = 1, tmp;
    while (a <= n) {
        tmp = a;
        a += b;
        b = tmp;
    }
    return b;
}

int main() {
    vector<long long> a;
    long long n, res = 0;
    in >> n;
    while (n) {
        res++;
        a.push_back(dif(n));
        n -= dif(n);
    }
    out << res << "\n";
    for (int i = 0; i < a.size(); i++) {
        out << a[i] << " ";
    }
    return 0;
}
