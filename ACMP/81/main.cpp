#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, tmp, mn = 30000, mx = 0;
    in >> n;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        mx = max(mx, tmp);
        mn = min(mn, tmp);
    }
    out << mn << " " << mx;
    return 0;
}
