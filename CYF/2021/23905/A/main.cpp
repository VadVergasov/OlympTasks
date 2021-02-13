#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    pair<string, string> a, b;
    for (int i = 0; i < n; i++) {
        char t;
        cin >> t;
        if (i % 2 == 0) {
            a.first += t;
        } else {
            a.second += t;
        }
    }
    for (int i = 0; i < n; i++) {
        char t;
        cin >> t;
        if (i % 2 == 0) {
            b.first += t;
        } else {
            b.second += t;
        }
    }
    sort(a.first.begin(), a.first.end());
    sort(a.second.begin(), a.second.end());
    sort(b.first.begin(), b.first.end());
    sort(b.second.begin(), b.second.end());
    if (a.first == b.first && a.second == b.second) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}
