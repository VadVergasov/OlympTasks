"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
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