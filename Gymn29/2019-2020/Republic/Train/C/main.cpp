#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<int> a(n);
    for (auto &i : a) {
        in >> i;
    }
    map<int, int> bits;
    for (auto i : a) {
        bits[__builtin_popcount(i)]++;
    }
    int res = 0;
    for (auto i : bits) {
        res = max(res, i.second);
    }
    out << res;
    return 0;
}