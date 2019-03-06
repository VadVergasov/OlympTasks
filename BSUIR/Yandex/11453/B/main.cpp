#include <bits/stdc++.h>

using namespace std;

bool sequal(vector<char> &a, vector<char> &b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    ifstream in("maniac.in");
    ofstream out("maniac.out");
    map<char, char> a, ap;
    for (int i = 0; i < 26; i++) {
        char t;
        in >> t;
        a['a' + i] = t;
    }
    int n;
    in >> n;
    string s1, s2;
    in >> s1 >> s2;
    bool f = false;
    for (int i = 0; i < n; i++) {
        if (ap.find(s1[i]) != ap.end()) {
            if (ap[s1[i]] != s2[i]) {
                out << -1;
                return 0;
            }
        } else {
            ap[s1[i]] = s2[i];
            if (s1[i] != s2[i]) {
                f = true;
            }
        }
    }
    vector<char> cur(ap.size()), need(ap.size());
    int j = 0;
    for (auto i : ap) {
        cur[j] = i.first;
        need[j] = i.second;
        j++;
    }
    int res = 0;
    while (!sequal(cur, need)) {
        for (int i = 0; i < cur.size(); i++) {
            cur[i] = a[cur[i]];
        }
        res++;
    }
    out << res;
    return 0;
}