#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    long long res = 0, last = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'H') {
            last = 1;
            res += 1;
        } else if (s[i] == 'C') {
            last = 12;
            res += 12;
        } else if (s[i] == 'N') {
            last = 14;
            res += 14;
        } else if (s[i] == 'O') {
            last = 16;
            res += 16;
        } else if (isdigit(s[i])) {
            res -= last;
            res += last * atoi(s.substr(i, i + 1).c_str());
        }
    }
    cout << res;
    return 0;
}