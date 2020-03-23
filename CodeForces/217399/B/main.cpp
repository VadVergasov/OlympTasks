#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int> > g(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int num = 0;
    for (int i = 0; i < n; i++) {
        if (g[i].size() == 1) {
            num++;
        }
    }
    cout << max(0, n - num - 1);
    return 0;
}