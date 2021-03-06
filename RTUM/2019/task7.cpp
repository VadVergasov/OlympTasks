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
    int con = 100000000;
    int con2 = 5000000;
    vector<int> resh(con + 10, 0);
    for (int i = 2; i <= con; i++) {
        if (!resh[i]) {
            for (int j = i * 2; j <= con; j += i) {
                resh[j] = 1;
            }
        }
    }
    vector<int> frac;
    for (int i = 2; i < resh.size(); i++) {
        if (!resh[i]) {
            frac.push_back(i);
        }
    }
    cout << frac.size() << endl;
    // for (int i = 0; i < frac.size(); i++) {
    //     cout << frac[i] << endl << endl;
    // }
    // vector<vector<int> > ans(con2);
    int frac1, frac2;
    map<int, vector<pair<int, int> > > mp;
    for (int i = 3; i <= con2; i++) {
        frac1 = -100000000;
        frac2 = -100000000;
        for (int j = 0; j < frac.size(); j++) {
            if (i % frac[j] == 0) {
                frac1 = frac[j];
                break;
            }
        }
        frac2 = i / frac1;
        // for (int j = 0; j < frac.size(); j++) {
        //     if (frac[j] >= i) {
        //         break;
        //     }
        //     if (i % frac[j] == 0) {
        //         frac2 = frac[j];
        //     }
        // }
        // cout << i << " " << frac1 << " " << frac2 << endl;
        mp[frac1 + frac2].push_back({i, frac1});
    }
    int o = 1;
    for (map<int, vector<pair<int, int> > >::iterator it = mp.begin();
         it != mp.end(); it++) {
        if ((*it).second.size() != 2) {
            continue;
        }
        if ((*it).first > 10000) {
            break;
        }
        // o++;
        // if (o > 100) {
        //     break;
        // }

        cout << (*it).first << "\t";
        for (int j = 0; j < (*it).second.size(); j++) {
            cout << "{" << (*it).second[j].first << ": "
                 << (*it).second[j].second << ", "
                 << (*it).second[j].first / (*it).second[j].second << "} ";
        }
        cout << endl;
    }
    return 0;
}