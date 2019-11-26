#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    set<int> a, b;
    for (int i = 0; i < 11; i++) {
        int t;
        in >> t;
        a.insert(t);
    }
    for (int i = 0; i < 11; i++) {
        int t;
        in >> t;
        b.insert(t);
    }
    int n, res = 1;
    pair<int, int> mn = make_pair(0, 0);
    in >> n;
    for (int i = 0; i < n; i++) {
        int t;
        in >> t;
        if (a.find(t) != a.end() && b.find(t) != b.end()) {
            res++;
        } else if (a.find(t) != a.end()) {
            mn.first++;
        } else {
            mn.second++;
        }
    }
    out << res << "\n";
    for (int i = 0; i < res; i++) {
        out << mn.first + i << ":" << mn.second + res - i - 1 << "\n";
    }
    return 0;
}