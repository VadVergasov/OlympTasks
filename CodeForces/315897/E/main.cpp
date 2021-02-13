#include <bits/stdc++.h>

using namespace std;

const unsigned long long pp = 37;

int main() {
    ifstream cin("substrcmp.in");
    ofstream out("substrcmp.out");
    string s;
    cin >> s;
    vector<unsigned long long> p(s.size()), hash(s.size());
    p[0] = 1;
    for (int i = 1; i < (int)s.size(); i++) {
        p[i] = p[i - 1] * pp;
    }
    hash[0] = s[0] - 'a' + 1;
    for (int i = 1; i < (int)s.size(); i++) {
        hash[i] = hash[i - 1] + (s[i] - 'a' + 1) * p[i];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a--;
        b--;
        c--;
        d--;
        unsigned long long first, second;
        if (a == 0) {
            first = hash[b] * p[c];
        } else {
            first = (hash[b] - hash[a-1]) * p[c];
        }
        if (c == 0) {
            second = hash[d] * p[a];
        } else {
            second = (hash[d] - hash[c-1]) * p[a];
        }
        cout << first << " " << second << "\n";
        if (first == second) {
            out << "Yes\n";
        } else {
            out << "No\n";
        }
    }
    return 0;
}
