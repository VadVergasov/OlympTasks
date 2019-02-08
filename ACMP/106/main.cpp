#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, tmp, res = 0;
    in >> n;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        if (tmp == 0) {
            res++;
        }
    }
    out << min(res, n - res);
    return 0;
}
