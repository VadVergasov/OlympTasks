#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a, b;
    in >> a >> b;
    string res = "";
    for (int i = 0; i < __gcd(a, b); i++) {
        res += "1";
    }
    out << res;
    return 0;
}
