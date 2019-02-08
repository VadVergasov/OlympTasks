#include <bits/stdc++.h>

using namespace std;

int main() {
    int tmp;
    vector<int> a;
    for (int i = 0; i < 4; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    if (max(a[0] + a[1] - a[2], a[1] + a[2] - a[3]) > 0) {
        cout << "TRIANGLE";
    } else if (max(a[0] + a[1] - a[2], a[1] + a[2] - a[3]) < 0) {
        cout << "IMPOSSIBLE";
    } else {
        cout << "SEGMENT";
    }
    return 0;
}
