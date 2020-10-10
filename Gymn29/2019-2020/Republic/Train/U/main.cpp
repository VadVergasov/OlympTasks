#include <bits/stdc++.h>

using namespace std;

#pragma GCC optimize("O2,unroll-loops")

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n;
    in >> n;
    for (long long i = 2; i < n; i++) {
        long long n1 = n;
        set<long long> a;
        while (n1) {
            a.insert(n1 % i);
            n1 /= i;
            if (a.size() > 1) {
                break;
            }
        }
        if (a.size() == 1) {
            out << i;
            return 0;
        }
    }
    return 0;
}