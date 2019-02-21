#include <bits/stdc++.h>

using namespace std;

vector<int> coords;
vector<pair<pair<int, int>, int> > a;

int check(int c) {
    int res =
        distance(lower_bound(coords.begin(), coords.end(), a[c].first.first),
                 lower_bound(coords.begin(), coords.end(),
                             a[c].first.first + a[c].first.second - 1));
    auto next = lower_bound(coords.begin(), coords.end(),
                            a[c].first.first + a[c].first.second - 1);
    if (*(next - 1) == a[c].first.first) {
        return res;
    }
    if (next == coords.end()) {
        return res;
    }
    if (*next > a[c].first.first + a[c].first.second - 1) {
        next--;
    }
    res += check(distance(coords.begin(), next));
    return res;
}

int main() {
    ifstream in("domino.in");
    ofstream out("domino.out");
    int n;
    in >> n;
    coords.resize(n);
    a.resize(n);
    vector<pair<int, int> > re(n);
    for (int i = 0; i < n; i++) {
        in >> a[i].first.first >> a[i].first.second;
        a[i].second = i;
        coords[i] = a[i].first.first;
    }
    sort(coords.begin(), coords.end());
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        int l, r;
        int res = check(i);
        re[i] = make_pair(a[i].second, res);
    }
    sort(re.begin(), re.end());
    for (int i = 0; i < n; i++) {
        out << re[i].second << "\n";
    }
    return 0;
}