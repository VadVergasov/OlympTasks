#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, tmp, res = 0;
    in >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < floor(n / 2.0) + 1; i++) {
        res += floor(a[i] / 2.0) + 1;
    }
    out << res;
    return 0;
}
