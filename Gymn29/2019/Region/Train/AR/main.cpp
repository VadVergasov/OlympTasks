#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    ifstream in("input.txt");
    ofstream out("output.txt");
    int Q;
    in >> Q;
    in.ignore();
    int n = 9;
    vector<string> q(n);
    for (int i = 0; i < n; ++i) {
        getline(in, q[i], '\n');
    }
    auto check = [&](map<char, int> mp) {
        if (mp.size() != 9) return 1;
        int ok = 1;
        for (auto k : mp)
            if (k.second > 1) ok = 0;
        return (1 - ok);
    };
    while (Q--) {
        int ans = 1;
        vector<string> temp(n);
        for (int i = 0; i < n; ++i) {
            getline(in, temp[i], '\n');
            for (int j = 0; j < n; ++j) {
                if (!isdigit(temp[i][j]) || temp[i][j] == '0') ans = 0;
                if (q[i][j] != temp[i][j] && q[i][j] != '*') ans = 0;
            }
        }
        for (int i = 0; i < n; ++i) {
            map<char, int> mp;
            for (int j = 0; j < n; ++j) mp[temp[i][j]]++;
            if (check(mp)) ans = 0;
        }
        for (int j = 0; j < n; ++j) {
            map<char, int> mp;
            for (int i = 0; i < n; ++i) mp[temp[i][j]]++;
            if (check(mp)) ans = 0;
        }
        map<char, int> mp;
        for (int k = 0; k < 3; k++) {
            for (int z = 0; z < 3; z++) {
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        mp[temp[k * 3 + i][z * 3 + j]]++;
                    }
                }
                if (check(mp)) {
                    ans = 0;
                }
                mp.clear();
            }
        }
        out << ((ans == 1) ? 'Y' : 'N');
    }
    return 0;
}