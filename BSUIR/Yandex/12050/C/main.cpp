#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("multiset.in");
    ofstream out("multiset.out");
    int q;
    in >> q;
    multiset<int> a;
    set<int> num;
    num.insert(0);
    a.insert(0);
    for (int i = 0; i < q; i++) {
        char t;
        in >> t;
        if (t == '+') {
            int x;
            in >> x;
            a.insert(x);
            num.insert(x);
        } else if (t == '-') {
            int x;
            in >> x;
            a.erase(x);
            num.erase(x);
        } else {
            int x;
            in >> x;
            int mx = 0;
            for (auto i : num) {
                mx = max(mx, i ^ x);
            }
            out << mx << "\n";
        }
    }
    return 0;
}