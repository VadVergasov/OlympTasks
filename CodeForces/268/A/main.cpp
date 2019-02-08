#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, tmp1, tmp2;
    cin >> n;
    vector<int> a, h;
    for (int i = 0; i < n; i++) {
        cin >> tmp1 >> tmp2;
        a.push_back(tmp2);
        h.push_back(tmp1);
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            if (h[i] == a[j]) {
                res++;
            }
        }
    }
    cout << res;
    return 0;
}
