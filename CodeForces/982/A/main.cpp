#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    if (n == 1 && s == "0") {
        cout << "No";
        return 0;
    }
    for (int i = 0; i < n - 1; i++) {
        if ((s[i] == s[i + 1] && s[i] == '1') ||
            (s[i] == '0' && s[i] == s[i + 2] && s[i] == s[i + 1])) {
            cout << "No";
            return 0;
        }
    }
    if (s[0] == s[1] || s.back() == s[s.size() - 2]) {
        cout << "No";
        return 0;
    }
    cout << "Yes";
    return 0;
}