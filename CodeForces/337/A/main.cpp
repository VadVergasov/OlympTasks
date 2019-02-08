#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, tmp;
    cin >> n >> m;
    vector<int> a, b;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    if (n == m) {
        cout << a[a.size() - 1] - a[0];
        return 0;
    }
    for (int i = 0; i <= m - n; i++) {
        int dif = a[n + i - 1] - a[i];
        // cout<<a[n+i-1]<<" "<<a[i]<<"\n";
        b.push_back(dif);
    }
    sort(b.begin(), b.end());
    cout << b[0];
    return 0;
}
