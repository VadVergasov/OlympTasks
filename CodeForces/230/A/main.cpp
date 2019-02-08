#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) { return a.first < b.first; }

int main() {
    int s, n, tmp1, tmp2;
    cin >> s >> n;
    vector<pair<int, int> > a;
    for (int i = 0; i < n; i++) {
        cin >> tmp1 >> tmp2;
        a.push_back(make_pair(tmp1, tmp2));
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++) {
        if (s > a[i].first) {
            s += a[i].second;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
