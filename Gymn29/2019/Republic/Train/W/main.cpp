#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, k;
    in >> n >> k;
    vector<int> a(n);
    for (auto &i : a) {
        in >> i;
    }
    return 0;
}