#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, tmp1, tmp2;
    cin >> n >> m;
    vector<int> a;
    a.resize(m, 0);
    for (int i = 0; i < n; i++) {
        cin >> tmp1 >> tmp2;
        for (int j = tmp1 - 1; j < tmp2; j++) {
            a[j]++;
        }
    }
    int res = 0;
    vector<int> b;
    for (int i = 0; i < m; i++) {
        if (a[i] == 0) {
            res++;
            b.push_back(i + 1);
        }
    }
    cout << res << "\n";
    for (int i = 0; i < res; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
