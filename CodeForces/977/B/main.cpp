#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> t;
    vector<int> num;
    for (int i = 0; i < n - 1; i++) {
        string u;
        u += s[i];
        u += s[i + 1];
        t.push_back(u);
        num.push_back(0);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < t.size(); j++) {
            string u;
            u += s[i];
            u += s[i + 1];
            if (u == t[j]) {
                num[j]++;
            }
        }
    }
    int mx = 0;
    for (int i = 0; i < num.size(); i++) {
        mx = max(mx, num[i]);
    }
    for (int i = 0; i < num.size(); i++) {
        if (mx == num[i]) {
            cout << t[i];
            break;
        }
    }
    return 0;
}
