#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b) { return b.size() < a.size(); }

int main() {
    int t, cur = 0;
    cin >> t;
    while (cur++ < t) {
        int n, mx = 0;
        cin >> n;
        vector<string> s(n);
        for (auto &i : s) {
            cin >> i;
            int cnt = 0;
            for (auto j : i) {
                if (j == '*') {
                    cnt++;
                }
            }
            mx = max(mx, cnt);
        }
        sort(begin(s), end(s), cmp);
        vector<string> res(mx + 1);
        bool f = false;
        for (auto i : s) {
            int last = 0, cnt = 0;
            for (int j = 0; j < (int)i.size() && !f; j++) {
                if (i[j] == '*') {
                    if (j - last > 0) {
                        string fir = i.substr(last, j - last), sec = res[cnt];
                        if (fir.find(sec) == -1 && sec.find(fir) == -1) {
                            f = true;
                            break;
                        }
                        if (cnt == 0 && sec.size() != 0) {
                            if (fir[0] != sec[0]) {
                                f = true;
                                break;
                            }
                        }
                        if (cnt == mx && sec.size() != 0) {
                            if (fir.back() != sec.back()) {
                                f = true;
                                break;
                            }
                        }
                        if (fir.size() > sec.size()) {
                            res[cnt] = fir;
                        }
                    }
                    cnt++;
                    last = j + 1;
                }
            }
            if (i.back() != '*') {
                if ((int)i.size() - last > 0) {
                    string fir = i.substr(last, (int)i.size() - last),
                           sec = res[cnt];
                    if (fir.find(sec) == -1 && sec.find(fir) == -1) {
                        f = true;
                        break;
                    }
                    if (cnt == 0 && sec.size() != 0) {
                        if (fir[0] != sec[0]) {
                            f = true;
                            break;
                        }
                    }
                    if (cnt == mx && sec.size() != 0) {
                        if (fir.back() != sec.back()) {
                            f = true;
                            break;
                        }
                    }
                    if (fir.size() > sec.size()) {
                        res[cnt] = fir;
                    }
                }
            }
            if (f) {
                break;
            }
        }
        cout << "Case #" << cur << ": ";
        if (f) {
            cout << "*\n";
        } else {
            for (auto i : res) {
                cout << i;
            }
            cout << "\n";
        }
    }
    return 0;
}