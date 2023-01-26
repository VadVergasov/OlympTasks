// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
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

struct Log {
    int day, hours, minutes;
    char status;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    map<int, vector<Log> > logs;
    while (n--) {
        int day, hours, minutes, id;
        char status;
        cin >> day >> hours >> minutes >> id >> status;
        logs[id].push_back({day, hours, minutes, status});
    }
    for (auto& [_, array] : logs) {
        sort(array.begin(), array.end(), [](const Log& a, const Log& b) {
            if (a.day == b.day) {
                if (a.hours == b.hours) {
                    return a.minutes < b.minutes;
                }
                return a.hours < b.hours;
            }
            return a.day < b.day;
        });
    }
    for (const auto& [_, log] : logs) {
        long long result = 0;
        bool is_flying = false;
        Log last = log.front();
        for (const auto& record : log) {
            if (record.status == 'A') {
                is_flying = true;
            } else if (record.status == 'C' || record.status == 'S') {
                is_flying = false;
                result += (record.day - last.day) * 24 * 60 +
                          (record.hours - last.hours) * 60 + record.minutes -
                          last.minutes;
            } else {
                if (is_flying) {
                    result += (record.day - last.day) * 24 * 60 +
                              (record.hours - last.hours) * 60 + record.minutes -
                              last.minutes;
                }
            }
            last = record;
        }
        cout << result << " ";
    }
    return 0;
}
