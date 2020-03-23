#include <bits/stdc++.h>

using namespace std;

void fast_sort(vector<pair<pair<int, int>, int> > &a) {
    vector<int> c(a.size());
    for (auto i : a) {
        c[i.first.second]++;
    }
    vector<pair<pair<int, int>, int> > res(a.size());
    vector<int> p(a.size());
    for (int i = 1; i < a.size(); i++) {
        p[i] = p[i - 1] + c[i - 1];
    }
    for (auto i : a) {
        res[p[i.first.second]] = i;
        p[i.first.second]++;
    }
    a = res;
    vector<int> c1(a.size());
    for (auto i : a) {
        c1[i.first.first]++;
    }
    vector<pair<pair<int, int>, int> > res1(a.size());
    vector<int> p1(a.size());
    for (int i = 1; i < a.size(); i++) {
        p1[i] = p1[i - 1] + c1[i - 1];
    }
    for (auto i : a) {
        res1[p1[i.first.first]] = i;
        p1[i.first.first]++;
    }
    a = res1;
}

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
        fast_sort(tmp);
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
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        string t;
        cin >> t;
        int l = 0, r = p.size() - 1;
        int left = -1, right = -1;
        while (l <= r) {
            int m = (l + r) >> 1;
            string found = s.substr(p[m], t.size());
            if (found > t) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        right = l;
        l = 0, r = p.size() - 1;
        while (l <= r) {
            int m = (l + r) >> 1;
            string found = s.substr(p[m], t.size());
            if (found >= t) {
                left = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        if (p[left] + t.size() < p.size() && s.substr(p[left], t.size()) == t) {
            cout << right - left << "\n";
        } else {
            cout << "0\n";
        }
    }
    return 0;
}