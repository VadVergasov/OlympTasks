#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b) { return a.first > b.first; }

int main() {
    int n, tmp;
    cin >> n;
    vector<pair<int, string> > a;
    string name, country;
    for (int i = 0; i < n; i++) {
        cin >> tmp >> name >> country;
        if (country == "Russia") {
            a.push_back(make_pair(tmp, name));
        }
    }
    sort(a.begin(), a.end(), cmp);
    cout << a[0].second;
    return 0;
}
