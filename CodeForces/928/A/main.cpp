#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    bool res = true;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        int tmp = 0;
        for (int j = 0; j < min(t.size(), s.size()); j++) {
            char a = tolower(t[j]), b = tolower(s[j]);
            if ((a == b) || (a == '0' && b == 'o') || (a == 'o' && b == '0') ||
                (a == '1' && b == 'l') || (a == 'l' && b == '1') ||
                (a == '1' && b == 'i') || (a == 'i' && b == '1') ||
                (a == 'l' && b == 'i') || (a == 'i' && b == 'l')) {
                tmp++;
            }
        }
        if (tmp == t.size()) {
            res = false;
            break;
        }
    }
    if (res) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}