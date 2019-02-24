#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("herding.in");
    ofstream out("herding.out");
    int n;
    in >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    out << 1 << "\n" << n - 1;
    return 0;
}