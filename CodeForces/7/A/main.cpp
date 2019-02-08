#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<char> > a(8);
    ;
    char tmp;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }
    int res = 0;
    for (int i = 0; i < 8; i++) {
        if (a[0][i] == 'B') {
            bool t = true;
            for (int j = 0; j < 8; j++) {
                if (a[j][i] != 'B') {
                    t = false;
                    break;
                }
            }
            if (t) {
                res++;
            }
        }
        if (a[i][0] == 'B') {
            bool t = true;
            for (int j = 0; j < 8; j++) {
                if (a[i][j] != 'B') {
                    t = false;
                    break;
                }
            }
            if (t) {
                res++;
            }
        }
    }
    if (res == 16) {
        cout << 8;
        return 0;
    }
    cout << min(res, 14);
    return 0;
}
