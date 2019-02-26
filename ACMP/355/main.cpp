#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    string s;
    in >> s;
    sort(s.begin(), s.end());
    do {
        out << s << "\n";
    } while (next_permutation(s.begin(), s.end()));
    return 0;
}