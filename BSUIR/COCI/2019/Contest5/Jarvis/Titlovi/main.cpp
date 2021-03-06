// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include <bits/stdc++.h>

using namespace std;

int main() {
    int i = 0, cur = 0;
    vector<int> x;
    string s;
    vector<string> s1;
    vector<vector<string> > s2;
    getline(cin, s);
    while (s != "#") {
        if (i % 4 == 0) {
            x.push_back(atoi(s.c_str()));
            s2.push_back({});
            i++;
        } else if (i % 4 == 1) {
            s1.push_back(s);
            i++;
        } else {
            s2[cur].push_back(s);
        }
        if (s == "") {
            i = 0;
            cur++;
        }
        getline(cin, s);
    }
    int t;
    cin >> t;
    int ms = t % 1000, sec = t / 1000;
    for (int i = 0; i < x.size(); i++) {
        cout << x[i] << "\n";
        int hour = atoi(s1[i].substr(0, 2).c_str());
        int minutes = atoi(s1[i].substr(3, 5).c_str());
        int seconds = atoi(s1[i].substr(6, 8).c_str());
        int miliseconds = atoi(s1[i].substr(9, 12).c_str());
        miliseconds += ms;
        if (miliseconds >= 1000) {
            seconds += miliseconds / 1000;
            miliseconds %= 1000;
        }
        if (miliseconds < 0) {
            seconds--;
            miliseconds += 1000;
        }
        seconds += sec;
        if (sec >= 60) {
            minutes += sec / 60;
            sec %= 60;
        }
        if (seconds < 0) {
            minutes--;
            seconds += 60;
        }
        if (minutes >= 60) {
            hour += minutes / 60;
            minutes %= 60;
        }
        if (minutes < 0) {
            hour--;
            minutes += 60;
        }
        string h = to_string(hour);
        if (h.size() == 1) {
            h.insert(0, "0");
        }
        string m = to_string(minutes);
        if (m.size() == 1) {
            m.insert(0, "0");
        }
        string se = to_string(seconds);
        if (se.size() == 1) {
            se.insert(0, "0");
        }
        string mis = to_string(miliseconds);
        if (miliseconds < 100 && miliseconds > 9) {
            mis.insert(0, "0");
        }
        if (miliseconds < 10 && miliseconds >= 0) {
            mis.insert(0, "00");
        }
        string res = h + ":" + m + ":" + se + "," + mis + " --> ";
        hour = atoi(s1[i].substr(17, 19).c_str());
        minutes = atoi(s1[i].substr(20, 22).c_str());
        seconds = atoi(s1[i].substr(23, 25).c_str());
        miliseconds = atoi(s1[i].substr(26, 29).c_str());
        miliseconds += ms;
        if (miliseconds >= 1000) {
            seconds += miliseconds / 1000;
            miliseconds %= 1000;
        }
        if (miliseconds < 0) {
            seconds--;
            miliseconds += 1000;
        }
        seconds += sec;
        if (sec >= 60) {
            minutes += sec / 60;
            sec %= 60;
        }
        if (seconds < 0) {
            minutes--;
            seconds += 60;
        }
        if (minutes >= 60) {
            hour += minutes / 60;
            minutes %= 60;
        }
        if (minutes < 0) {
            hour--;
            minutes += 60;
        }
        h = to_string(hour);
        if (h.size() == 1) {
            h.insert(0, "0");
        }
        m = to_string(minutes);
        if (m.size() == 1) {
            m.insert(0, "0");
        }
        se = to_string(seconds);
        if (se.size() == 1) {
            se.insert(0, "0");
        }
        mis = to_string(miliseconds);
        if (miliseconds < 100 && miliseconds > 9) {
            mis.insert(0, "0");
        }
        if (miliseconds < 10 && miliseconds >= 0) {
            mis.insert(0, "00");
        }
        res += h + ":" + m + ":" + se + "," + mis;
        cout << res << "\n";
        for (int j = 0; j < s2[i].size(); j++) {
            cout << s2[i][j] << "\n";
        }
    }
    cout << "#";
    return 0;
}