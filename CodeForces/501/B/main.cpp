#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, string> usernames, aliases;
    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        auto username = usernames.find(s1);
        auto alias = aliases.find(s1);
        if (alias != aliases.end()) {
            auto t = aliases.find(alias->second);
            while (t != aliases.end()) {
                alias = t;
                t = aliases.find(alias->second);
            }
        }
        if (username == usernames.end()) {
            if (alias != aliases.end()) {
                username = usernames.find(alias->second);
                usernames[username->first] = s2;
            } else {
                usernames[s1] = s2;
            }
        }
        aliases[s2] = s1;
    }
    cout << usernames.size() << "\n";
    for (auto i : usernames) {
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}