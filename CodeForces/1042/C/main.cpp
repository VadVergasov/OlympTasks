#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, tmp, ot = 0, nul = 0;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp < 0) {
            ot++;
        }
        if (tmp == 0) {
            nul++;
        }
        a.push_back(tmp);
    }
    if (ot % 2 == 1) {
        if (nul == 0) {
        }
    }
    return 0;
}
