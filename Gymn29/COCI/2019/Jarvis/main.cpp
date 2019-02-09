#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    map<int, int> c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        c[b[i] - a[i]]++;
    }
    int mx = 0;
    for (map<int, int>::iterator i = c.begin(); i != c.end(); i++) {
        mx = max(mx, (*i).second);
    }
    cout << mx;
    return 0;
}