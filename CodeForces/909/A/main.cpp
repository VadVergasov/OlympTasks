#include <bits/stdc++.h>

using namespace std;

int main() {
    short int i = 1;
    string a, b, c;
    cin >> a >> b;
    c += a[0];
    while (i < a.size() + 1) {
        if (a[i] < b[0] && i < a.size()) {
            c += a[i];
        } else {
            c += b[0];
            break;
        }
        i++;
    }
    cout << c;
    return 0;
}
