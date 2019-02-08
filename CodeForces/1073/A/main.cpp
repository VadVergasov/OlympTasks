#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    char p = s[0];
    for (int i = 1; i < n; i++) {
        if (p != s[i]) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
