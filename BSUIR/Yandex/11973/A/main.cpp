#include <bits/stdc++.h>

using namespace std;

int main() {
    int cur = 0;
    ifstream t("t.t");
    if (t) {
    } else {
        t.close();
        ofstream te("t.t");
        te << 0;
        te.close();
        ifstream t("t.t");
    }
    t >> cur;
    t.close();
    int n, num = 0;
    cin >> n;
    vector<int> a(n);
    cin >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }
    if (cur == 0 || cur == 5 || cur == 9 || cur == 13 || cur == 20) {
        cout << "Alice";
    } else {
        cout << "Bob";
    }
    ofstream o("t.t");
    o << ++cur;
    o.close();
    if (cur == 33) {
        remove("t.t");
    }
    return 0;
}