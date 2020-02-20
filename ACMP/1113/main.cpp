#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a, b;
    in >> a >> b;
    if (a % b == 0 || b % a == 0) {
        out << 1;
    } else {
        out << 666;
    }
    return 0;
}