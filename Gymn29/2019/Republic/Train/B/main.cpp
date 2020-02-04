#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a) {
        in >> i;
    }
    for (auto &i : b) {
        in >> i;
    }
    set<pair<long long, int> > q;
    for (int i = 0; i < m; i++) {
        q.insert({max(a[i], b[i]), i});
    }
    for (int i = m; i < n; i++) {
        auto l = *q.begin();
        q.erase(l);
        q.insert({l.first + max(a[i], b[l.second]), l.second});
    }
    out << (*--q.end()).first;
    return 0;
}