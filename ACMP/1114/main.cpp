#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int v, t;
    in >> v >> t;
    out << (((v * t + 1) % 109 == 0) ? 109 : (v * t + 1 + 109 * 1000000) % 109);
    return 0;
}