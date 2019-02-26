#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    string s;
    in >> s;
    next_permutation(s.begin(), s.end());
    out << s;
    return 0;
}