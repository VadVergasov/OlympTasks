#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long x, y, z;
    in >> x >> y >> z;
    out << x * 3 + y * 5 + z * 12;
    return 0;
}
