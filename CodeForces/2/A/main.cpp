#include <bits/stdc++.h>

using namespace std;

string s[1001];
int a, n, x[1001];
map<string, int> p, t;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> x[i];
        p[s[i]] += x[i];
    }
    for (int i = 0; i < n; i++) {
        a = max(a, p[s[i]]);
    }
    int i = 0;
    while (p[s[i]] < a || (t[s[i]] += x[i]) < a) {
        i++;
    }
    cout << s[i];
    return 0;
}
