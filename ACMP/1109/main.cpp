#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    out << "The next number for the number " << n << " is " << n + 1
        << ".\nThe previous number for the number " << n << " is " << n - 1
        << ".";
    return 0;
}