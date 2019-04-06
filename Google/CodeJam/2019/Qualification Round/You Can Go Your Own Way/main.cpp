#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string s, res = "";
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == 'S') {
                res += 'E';
            } else {
                res += 'S';
            }
        }
        cout << "Case #" << i + 1 << ": " << res << "\n";
    }
    return 0;
}