#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    multiset<int> a;
    int first;
    in >> first;
    a.insert(first);
    for (int i = 1; i < n; i++) {
        int t;
        in >> t;
        a.insert(t);
    }
    a.erase(first);
    out << a.size();
    return 0;
}