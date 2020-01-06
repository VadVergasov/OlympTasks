#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> a(n);
    set<string> b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b.insert(a[i]);
    }
    long long res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            string t = "";
            for (int z = 0; z < k; z++) {
                if (a[i][z] == a[j][z]) {
                    t += a[i][z];
                } else {
                    if (a[i][z] == 'S' && a[j][z] == 'T' ||
                        a[i][z] == 'T' && a[j][z] == 'S') {
                        t += 'E';
                    } else if (a[i][z] == 'S' && a[j][z] == 'E' ||
                               a[i][z] == 'E' && a[j][z] == 'S') {
                        t += 'T';
                    } else {
                        t += 'S';
                    }
                }
            }
            if (b.find(t) != b.end()) {
                res++;
            }
        }
    }
    cout << res / 3;
    return 0;
}