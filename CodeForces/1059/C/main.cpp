#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        a.push_back(i + 1);
    }
    for (int i = 0; i < n; i++) {
        int nod = a[i];
        for (int j = i + 1; j < n; j++) {
            nod = __gcd(nod, a[j]);
        }
        a.push_back(nod);
    }
    for (int i = n; i < 2 * n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
