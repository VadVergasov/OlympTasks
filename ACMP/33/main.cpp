#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a, b;
    in >> a >> b;
    out << b - 1 << " " << a - 1;
    return 0;
}
