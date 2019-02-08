#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, res = 0;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < n; i++) {
        res += min(abs(s1[i] - s2[i]), min(('9' - s1[i]) + (s2[i] - '0') + 1,
                                           (s1[i] - '0') + ('9' - s2[i]) + 1));
    }
    cout << res;
    return 0;
}
