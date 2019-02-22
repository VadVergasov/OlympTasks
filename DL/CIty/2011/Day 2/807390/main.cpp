#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, tmp;
    in >> n;
    vector<int> a;
    in >> tmp;
    a.push_back(tmp + abs(tmp));
    for (int i = 1; i < n; i++) {
        in >> tmp;
        a.push_back(a[i - 1] + abs(tmp) + tmp);
    }
    int res = -10e6;
    for (int i = 0; i < n; i++) {
        res = max(res, a[i]);
    }
    out << res;
    return 0;
}
