#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    unsigned long long a, b;
    in >> a >> b;
    while (a != b) {
        if (ceil(log2(a)) > ceil(log2(b))) {
            a >>= 1;
        } else if (ceil(log2(a)) < ceil(log2(b))) {
            b >>= 1;
        } else {
            a >>= 1;
            b >>= 1;
        }
    }
    out << a;
    return 0;
}