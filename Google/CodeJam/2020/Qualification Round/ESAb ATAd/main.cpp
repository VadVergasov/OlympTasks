#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, b, cur = 0;
    cin >> t >> b;
    while (cur++ < t) {
        vector<bool> res(b, false);
        for (int i = 0; i < b; i++) {
            cout << i + 1 << endl;
            flush(cout);
            bool r;
            cin >> r;
            res[i] = r;
        }
        for (int i = 0; i < b; i++) {
            cout << res[i];
        }
        cout << endl;
        flush(cout);
        char r;
        cin >> r;
        if (r == 'N') {
            return 0;
        }
    }
    return 0;
}