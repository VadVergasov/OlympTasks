#include <bits/stdc++.h>

using namespace std;

int find_set(int v, vector<int> &parent) {
    if (v == parent[v]) {
        return v;
    }
    return parent[v] = find_set(parent[v], parent);
}

void union_set(int a, int b, vector<int> &parent, vector<int> &ranks) {
    a = find_set(a, parent);
    b = find_set(b, parent);
    if (a != b) {
        if (ranks[a] < ranks[b]) {
            swap(a, b);
        }
        parent[b] = a;
        if (ranks[a] == ranks[b]) {
            ranks[a]++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> ranks(n), parent(n);
    iota(parent.begin(), parent.end(), 0);
    map<char, set<int> > mp;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        for (auto j : tmp) {
            mp[j].insert(i);
        }
    }
    for (auto [i, j] : mp) {
        int start = *j.begin();
        for (auto k : j) {
            union_set(start, k, parent, ranks);
        }
    }
    set<int> res;
    for (auto i : parent) {
        res.insert(find_set(i, parent));
    }
    cout << res.size();
    return 0;
}