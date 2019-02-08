#include <bits/stdc++.h>

using namespace std;

int main() {
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char n;
    cin >> n;
    string s1;
    cin >> s1;
    int dir = 1;
    if (n == 'L') {
        dir = -1;
    }
    for (int i = 0; i < s1.size(); i++) {
        cout << s[s.find(s1[i]) - dir];
    }
    return 0;
}
