#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> b >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= b[0]) {
            b.insert(b.begin(), a[i]);
        } else {
            b.insert(b.end(), a[i]);
        }
    }
    cout << b;
    return 0;
}
