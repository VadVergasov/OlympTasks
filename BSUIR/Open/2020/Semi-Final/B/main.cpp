#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, long long> mp;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mp[s]++;
    }
    long long r = 0;
    string res = "BSUIROPENX";
    for (int i = 1; i < res.size(); i++) {
        string start = res.substr(0, i);
        string end = res.substr(i, res.size() - i);
        r += mp[start] * mp[end];
    }
    cout << r;
    return 0;
}