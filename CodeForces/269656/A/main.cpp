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
    vector<long long> lcp(p.size() - 1);
    k = 0;
    for (int i = 0; i < p.size() - 1; i++) {
        int x = c[i];
        int j = p[x - 1];
        while (s[i + k] == s[j + k]) {
            k++;
        }
        lcp[x - 1] = k;
        k = max(k - 1, 0);
    }
    long long res = 0;
    for (int i = 1; i < p.size(); i++) {
        res += p.size() - 1 - p[i] - lcp[i - 1];
    }
    cout << res;
    return 0;
}