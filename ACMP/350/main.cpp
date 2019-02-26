#include <bits/stdc++.h>

using namespace std;

int fact(int a) {
    if (a == 1) {
        return 1;
    }
    return fact(a - 1) * a;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    string s;
    in >> s;
    for (int i = 0; i < fact(s.size()); i++) {
        out << s << "\n";
        next_permutation(s.begin(), s.end());
    }
    return 0;
}