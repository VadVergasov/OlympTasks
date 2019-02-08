#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, tmp;
    cin >> n;
    vector<int> a;
    cin >> tmp;
    a.push_back(tmp);
    for (int i = 1; i < n; i++) {
        cin >> tmp;
        a.push_back(a[i - 1] + tmp);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        cout << (upper_bound(a.begin(), a.end(), tmp - 1) - a.begin()) + 1
             << "\n";
    }
    return 0;
}
