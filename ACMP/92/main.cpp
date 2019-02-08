#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    int res = 1;
    while (res * 6 != n) {
        res++;
    }
    out << res << " " << res * 4 << " " << res;
    return 0;
}
