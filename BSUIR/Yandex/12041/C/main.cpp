#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, x, y, z;
    in >> n >> x >> y >> z;
    vector<pair<int, int> > a(n);
    for (int i = 0; i < n; i++) {
        in >> a[i].first >> a[i].second;
    }
    for (int i = 0; i < n; i++) {
        if (a[i].first < a[i].second) {
            for (int j = i + 1; j < n; j++) {
                if (a[j].first > a[j].second) {
                    a[i].first +=
                        min(a[j].first - a[j].second, a[i].second - a[i].first);
                    a[j].first -=
                        min(a[j].first - a[j].second, a[i].second - a[i].first);
                }
            }
        }
    }
    return 0;
}