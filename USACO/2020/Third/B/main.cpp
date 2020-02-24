#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("triangles.in");
    ofstream out("triangles.out");
    int n;
    in >> n;
    vector<pair<int, int> > a(n);
    for (auto &i : a) {
        in >> i.first >> i.second;
    }
    long long field = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (a[i].first == a[j].first && (a[i].second == a[k].second ||
                                                 a[j].second == a[k].second) ||
                    a[i].second == a[j].second && (a[i].first == a[k].first ||
                                                   a[j].first == a[k].first)) {
                    field += ((max({a[i].first, a[j].first, a[k].first}) -
                               min({a[i].first, a[j].first, a[k].first})) *
                              (max({a[i].second, a[j].second, a[k].second}) -
                               min({a[i].second, a[j].second, a[k].second})));
                    field %= (int)(1e9 + 7);
                }
            }
        }
    }
    out << field;
    return 0;
}