#include <bits/stdc++.h>

using namespace std;

int l[26];

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    if (a.size() + b.size() != c.size()) {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < a.size(); i++) {
        l[a[i] - 'A']++;
    }
    for (int i = 0; i < b.size(); i++) {
        l[b[i] - 'A']++;
    }
    for (int i = 0; i < c.size(); i++) {
        l[c[i] - 'A']--;
    }
    bool res = true;
    for (int i = 0; i < 26; i++) {
        if (l[i] < 0) {
            res = false;
        }
    }
    if (res) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
