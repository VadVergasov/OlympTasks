#include <bits/stdc++.h>
#include "neutrino.h"

using namespace std;

int main() {
    int n = Init();
    set<int> candidates;
    while (candidates.size() != 1) {
        int x = (1 << (int)log2(n)), y = 1;
        int res = NeutrinoFlow(x, y);
        cout << res << " " << x << " " << y << endl;
        if (res == x) {
            Locate(res - y);
        }
        for (int i = res; i < n; i += res) {
            candidates.insert(i - y);
        }
        for (auto i : candidates) {
            cout << i << " ";
        }
        cout << endl;
    }
    Locate(*candidates.begin());
    return 0;
}