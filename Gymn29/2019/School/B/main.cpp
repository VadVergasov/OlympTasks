#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    while (s[0] + s[1] + s[2] != s[3] + s[4] + s[5]) {
        int n = atoi(s.c_str());
        n++;
        s = to_string(n);
        while (s.size() < 6) {
            s = "0" + s;
        }
    }
    cout << s;
    return 0;
}