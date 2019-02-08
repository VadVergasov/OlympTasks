#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) { return a.first > b.first; }

int main() {
    string s;
    cin >> s;
    int i = 0, k = 0;
    vector<pair<int, int> > a;
    while (i < s.size()) {
        if (s[i] == '(') {
            a.push_back(make_pair(k, i));
            k++;
        }
        i++;
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < a.size(); i++) {
    }
    return 0;
}
