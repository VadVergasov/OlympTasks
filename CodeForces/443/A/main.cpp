#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a;
    a.resize(26, 0);
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            a[s[i] - 'a']++;
        }
    }
    int res = 0;
    for (int i = 0; i < 26; i++) {
        if (a[i] != 0) {
            res++;
        }
    }
    cout << res;
    return 0;
}
