#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    if (n % 10 != 0) {
        out << n / 10 + 1;
    } else {
        out << n / 10;
    }
    return 0;
}