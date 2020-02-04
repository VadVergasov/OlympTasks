#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, k;
    in >> n >> k;
    if (k * 2 > n) {
        out << -1;
    } else {
        for (int i = 1; i <= k; i++) {
            out << i * 2 << " ";
        }
    }
    return 0;
}