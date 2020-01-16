#include <bits/stdc++.h>

using namespace std;

int main() {
    int p = 10;
    for (int q = 0; q <= p; q++) {
        ifstream in("input" + to_string(q) + ".txt");
        ofstream out("output" + to_string(q) + ".txt");
        int n, t;
        in >> t >> n;
        out << n << "\n";
        in.close();
    }
    return 0;
}