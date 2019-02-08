#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, z = 0, o = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            z++;
        } else {
            o++;
        }
    }
    cout << n - min(z, o) * 2;
    return 0;
}
