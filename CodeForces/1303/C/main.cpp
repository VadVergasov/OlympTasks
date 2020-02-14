// https://codeforces.com/contest/1303/problem/C
#include <bits/stdc++.h>

using namespace std;

int start = -1;

bool dfs(int v, vector<set<int> > &g, vector<bool> &used) {
    used[v] = true;
    if (g[v].size() > 2) {
        return false;
    }
    if (g[v].size() == 1) {
        start = v;
    }
    for (auto i : g[v]) {
        if (!used[i]) {
            return dfs(i, g, used);
        }
    }
    return true;
}

void res(int v, vector<set<int> > &g, vector<bool> &used) {
    used[v] = true;
    cout << (char)(v + 'a');
    for (auto i : g[v]) {
        if (!used[i]) {
            dfs(i, g, used);
        }
    }
}

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        string s;
        vector<set<int> > g(26);
        vector<bool> used(26);
        cin >> s;
        g[s.front() - 'a'].insert(s[1] - 'a');
        g[s.back() - 'a'].insert(s[s.size() - 2] - 'a');
        for (int i = 1; i < s.size() - 1; i++) {
            g[s[i] - 'a'].insert(s[i - 1] - 'a');
            g[s[i] - 'a'].insert(s[i + 1] - 'a');
        }
        bool r = true;
        for (int i = 0; i < s.size(); i++) {
            r &= dfs(s[i] - 'a', g, used);
        }
        if (r && start != -1) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        for (int i = 0; i < 26; i++) {
            used[i] = false;
        }
        res(start, g, used);
        for (int i = 0; i < 26; i++) {
            if (!used[i]) {
                res(i, g, used);
            }
        }
        cout << "\n";
    }
    return 0;
}