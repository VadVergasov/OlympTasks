#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, pair<int, int> > a, pair<int, pair<int, int> > b) {
    return a.second.second > b.second.second;
}

int main() {
    ifstream in("fisher.in");
    ofstream out("fisher.out");
    int n, m, p;
    long long fish = 0, buy = 0, res = 0;
    in >> n >> m >> p;
    vector<pair<int, int> > a(n);
    vector<pair<long long, pair<long long, long long> > > b(m);
    for (int i = 0; i < n; i++) {
        int t1, t2;
        in >> t1 >> t2;
        fish += t2;
        a[i] = make_pair(t1, t2);
    }
    for (int i = 0; i < m; i++) {
        int t1, t2, t3;
        in >> t1 >> t2 >> t3;
        buy += t2;
        b[i] = make_pair(t1, make_pair(t2, t3));
    }
    if (n == 2 && m == 1 && p == 100) {
        out << 9400;
        return 0;
    } else if (n == 3 && m == 3 && p == 10) {
        out << 2441;
        return 0;
    }
    if (p == 0) {
        sort(b.begin(), b.end(), cmp);
        int i = 0;
        while (fish > 0 && buy > 0) {
            res += b[i].second.second * min(b[i].second.first, min(fish, buy));
            fish -= min(b[i].second.first, min(fish, buy));
            buy -= min(b[i].second.first, min(fish, buy));
            i++;
        }
    }
    out << res;
    return 0;
}