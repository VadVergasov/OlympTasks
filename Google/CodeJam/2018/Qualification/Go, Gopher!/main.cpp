#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;
        int x, y, counter = 0;
        cout << 2 << " " << 2 << endl;
        set<pair<int, int> > all;
        while (cin >> x >> y) {
            if (x == 0 && y == 0) {
                break;
            }
            if (x == -1 && y == -1) {
                return 0;
            }
            all.insert(make_pair(x, y));
            if (all.size() >= 9) {
                counter++;
                all.clear();
            }
            cout << 2 + counter * 3 << " " << 2 << endl;
        }
    }
    return 0;
}