#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, sqr;
    in >> n;
    sqr = sqrt(n);
    for (int i = 2; i <= sqr; i++) {
        while (n % i == 0) {
            n /= i;
            out << i << " ";
        }
    }
    if (n != 1) {
        out << n;
    }
    return 0;
}