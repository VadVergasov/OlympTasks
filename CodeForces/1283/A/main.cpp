#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    for (int k = 0; k < q; k++) {
        int h, m;
        cin >> h >> m;
        cout << (23 - h) * 60 + (60 - m) << endl;
    }
    return 0;
}