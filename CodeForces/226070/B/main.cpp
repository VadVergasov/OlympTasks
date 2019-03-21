#include <bits/stdc++.h>

using namespace std;

int main() {
    long long res = 0;
    string s;
    cin >> s;
    long long two = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '2') {
            two++;
        } else if (s[i] == '8') {
            res += two * (two - 1) / 2;
        }
    }
    cout << res;
    return 0;
}