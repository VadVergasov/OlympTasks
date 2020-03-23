#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("onlyone.in");
    ofstream out("onlyone.out");
    int n;
    in >> n;
    vector<tuple<int, int, int> > a(n);
    for (auto &i : a) {
        in >> get<0>(i) >> get<1>(i) >> get<2>(i);
    }
    long long res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            bool f = (get<0>(a[i]) == get<0>(a[j])),
                 s = (get<1>(a[i]) == get<1>(a[j])),
                 t = (get<2>(a[i]) == get<2>(a[j]));
            if ((f && !s && !t) || (!f && s && !t) || (!f && !s && t)) {
                res++;
            }
        }
    }
    out << res;
    return 0;
}