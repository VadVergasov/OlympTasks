#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int res = 0;
    int i = 0, f, s;
    string t;
    while (isdigit(s1[i])) {
        t += s1[i];
        i++;
    }
    f = atoi(t.c_str());
    i = 0;
    t = "";
    while (isdigit(s2[i])) {
        t += s2[i];
        i++;
    }
    s = atoi(t.c_str());
    if (s1.find("BC") != -1 && s2.find("BC") == -1) {
        res = s + f - 1;
    } else if (s2.find("BC") != -1 && s1.find("BC") == -1) {
        res = -(s + f - 1);
    } else if (s2.find("BC") != -1 && s1.find("BC") != -1) {
        res = f - s;
    } else {
        res = s - f;
    }
    cout << res;
    return 0;
}