#include <bits/stdc++.h>

using namespace std;

int main() {
    int num = 1;
    string s, res = "";
    getline(cin, s);
    s += ']';
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            num++;
        } else {
            if (num > 2) {
                res += to_string(num);
                res += s[i];
            } else {
                for (int j = 0; j < num; j++) {
                    res += s[i];
                }
            }
            num = 1;
        }
    }
    cout << res;
    return 0;
}
