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