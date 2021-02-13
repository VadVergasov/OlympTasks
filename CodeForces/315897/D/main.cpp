#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("unequal.in");
    ofstream cout("unequal.out");
    string s;
    cin >> s;
    map<string, bool> mp;
    for (int i = 0; i <= (int)s.size(); i++) {
        for (int j = 0; j < i; j++) {
            mp[s.substr(j, i - j)] = true;
        }
    }
    cout << mp.size();
    return 0;
}
