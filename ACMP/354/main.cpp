#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n;
    in >> n;
    vector<long long> res;
    for (long long i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            out << i;
            n /= i;
            if (n > 1) {
                out << "*";
            }
        }
    }
    if (n > 1) {
        out << n;
    }
    return 0;
}
