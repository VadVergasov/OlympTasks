#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    int pos = -1;
    for (int i = 1; i < n; i++) {
        pos += k;
        pos %= a.size();
        a.erase(a.begin() + pos);
        pos--;
    }
    cout << a[0];
    return 0;
}