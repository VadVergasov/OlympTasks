#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() > s2.size()) {
        cout << s2;
    } else if (s2.size() > s1.size()) {
        cout << s1;
    } else {
        if (s1 < s2) {
            cout << s1;
        } else {
            cout << s2;
        }
    }
    return 0;
}