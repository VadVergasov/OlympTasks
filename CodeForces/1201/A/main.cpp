#include <bits/stdc++.h>

using namespace std;

int main() {
    long long res = 0;
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    vector<int> score(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> score[i];
    }
    for (int i = 0; i < m; i++) {
        vector<int> ans(5, 0);
        for (int j = 0; j < n; j++) {
            ans[a[j][i] - 'A']++;
        }
        sort(ans.rbegin(), ans.rend());
        res += score[i] * ans.front();
    }
    cout << res;
    return 0;
}