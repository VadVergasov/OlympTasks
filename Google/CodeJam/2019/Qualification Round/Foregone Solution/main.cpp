#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string n, a = "", b = "";
        cin >> n;
        b.resize(n.size(), '0');
        int cur = n.find("4");
        while (cur != string::npos) {
            b[cur] = '1';
            n[cur]--;
            cur = n.find("4");
        }
        while (b[0] == '0') {
            b.erase(0, 1);
        }
        a = n;
        while (a[0] == '0') {
            a.erase(0, 1);
        }
        cout << "Case #" << i + 1 << ": " << a << " " << b << "\n";
    }
    return 0;
}