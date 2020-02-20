#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    int res = 0;
    while (n) {
        res += n % 10;
        n /= 10;
    }
    out << res;
    return 0;
}