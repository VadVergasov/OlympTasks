#include <bits/stdc++.h>
#define MAXN (int)10e5

using namespace std;

int comp = 0;
bool used[MAXN];
vector<vector<int> > a;
vector<vector<pair<long, long> > > cmps;
vector<pair<long, long> > cmp;

bool compor(vector<pair<long, long> > a, vector<pair<long, long> > b) {
    return a.size() > b.size();
}

void dfs(int v) {
    used[v] = true;
    cmp.push_back(make_pair(v, a[v].size()));
    for (int i = 0; i < a[v].size(); i++) {
        int to = a[v][i];
        if (!used[to]) {
            dfs(to);
        }
    }
}

void findcmp(int n) {
    for (int i = 0; i < n; i++) {
        used[i] = false;
    }
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            cmp.clear();
            dfs(i);
            cmps.push_back(cmp);
            comp++;
        }
    }
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m, k, tmp1, tmp2, res1 = 0, res2 = 0;
    in >> n >> m >> k;
    a.resize(n, vector<int>(0));
    for (int i = 0; i < m; i++) {
        in >> tmp1 >> tmp2;
        a[tmp1 - 1].push_back(tmp2 - 1);
        a[tmp2 - 1].push_back(tmp1 - 1);
    }
    findcmp(n);
    res1 = max(comp - k, 1);
    res2 = comp;
    sort(cmps.begin(), cmps.end(), compor);
    for (int i = 0; i < cmps.size() && k > 0; i++) {
        int sum = 0;
        for (int j = 0; j < cmps[i].size(); j++) {
            sum += cmps[i][j].second;
            cmps[i][j].second = cmps[i].size() - 1;
        }
        sum /= 2;
        k -= cmps[i].size() * (cmps[i].size() - 1) / 2 - sum;
    }
    int i = 0, sz = cmps[i].size(), s = 0;
    for (int j = 0; j < cmps[i].size(); j++) {
        s += cmps[i][j].second;
    }
    while (k > 0 && i < n) {
        long long sum = cmps[i + 1].size() * (cmps[i + 1].size() - 1) / 2 +
                        sz * (sz - 1) / 2;
        sz += cmps[i + 1].size();
        k -= sz * (sz - 1) / 2 - sum;
        res2--;
        i++;
    }
    out << res1 << " " << res2;
    return 0;
}
