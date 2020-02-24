#include <bits/stdc++.h>

using namespace std;

void dfs(int v, vector<int> &a, set<int> &used) {
    if (v == 1) {
        used.insert(v);
        return;
    }
    used.insert(v);
    if (used.find(a[v - 2]) == used.end()) {
        dfs(a[v - 2], a, used);
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n - 1), b(k);
    for (int i = 1; i < n; i++) {
        cin >> a[i - 1];
    }
    for (int i = 0; i < k; i++) {
        cin >> b[i];
    }
    set<int> used;
    for (int i = 0; i < k; i++) {
        if (used.find(b[i]) == used.end()) {
            dfs(b[i], a, used);
        }
    }
    cout << used.size();
    return 0;
}