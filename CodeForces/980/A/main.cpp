#include <bits/stdc++.h>

using namespace std;

int main() {
    int o = 0, t = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'o') {
            o++;
        } else {
            t++;
        }
    }
    if (o == 0 || t % o == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}