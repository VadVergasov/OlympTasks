#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    int res = n * (n + 1) / 2 + 1;
    out << res;
    return 0;
}