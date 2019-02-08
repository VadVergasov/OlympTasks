#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    out << n << "" << 9 << "" << 9 - n;
    return 0;
}
