#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
    }
    for (int i = 0; i < n; i++) {
        vector<bool> used(n, false);
        int cur = i;
        while (!used[cur]) {
            used[cur] = true;
            cur = a[cur];
        }
        cout << cur + 1 << " ";
    }
    return 0;
}