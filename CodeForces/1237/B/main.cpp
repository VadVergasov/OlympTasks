#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> a1;
    vector<int> a2(n);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a1[t] = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> a2[i];
    }
    int res = 0, shift = 0;
    for (int i = 0; i < n; i++) {
        cout << a1[a2[i]] << " " << i << " " << shift << "\n";
        if (a1[a2[i]] + shift > i) {
            res++;
            shift++;
        }
    }
    cout << res;
    return 0;
}