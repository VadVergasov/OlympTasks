#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    s += '$';
    vector<int> c(s.size()), p(s.size());
    vector<pair<char, int> > a(s.size());
    for (int i = 0; i < s.size(); i++) {
        a[i] = {s[i], i};
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < s.size(); i++) {
        p[i] = a[i].second;
    }
    c[p[0]] = 0;
    for (int i = 1; i < s.size(); i++) {
        if (a[i].first == a[i - 1].first) {
            c[p[i]] = c[p[i - 1]];
        } else {
            c[p[i]] = c[p[i - 1]] + 1;
        }
    }
    int k = 0;
    while ((1 << k) < s.size()) {
        vector<pair<pair<int, int>, int> > tmp(s.size());
        for (int i = 0; i < s.size(); i++) {
            tmp[i] = {{c[i], c[(i + (1 << k)) % s.size()]}, i};
        }
        sort(tmp.begin(), tmp.end());
        for (int i = 0; i < s.size(); i++) {
            p[i] = tmp[i].second;
        }
        c[p[0]] = 0;
        for (int i = 1; i < s.size(); i++) {
            if (tmp[i].first == tmp[i - 1].first) {
                c[p[i]] = c[p[i - 1]];
            } else {
                c[p[i]] = c[p[i - 1]] + 1;
            }
        }
        k++;
    }
    for (auto i : p) {
        cout << i << " ";
    }
    return 0;
}