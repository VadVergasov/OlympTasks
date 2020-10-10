#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, tmp1, tmp2, res = 1;
    in >> n;
    vector<pair<int, int> > a;
    for (int i = 0; i < n; i++) {
        in >> tmp1 >> tmp2;
        int t = __gcd(tmp1, tmp2);
        a.push_back(make_pair(tmp1 / t, tmp2 / t));
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        cout << a[i].first << " " << a[i].second << "\n";
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i].first == a[i + 1].first && a[i].second == a[i + 1].second) {
            continue;
        }
        res++;
    }
    out << res;
    return 0;
}
