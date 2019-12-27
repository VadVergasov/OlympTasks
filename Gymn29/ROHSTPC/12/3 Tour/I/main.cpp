#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        char t;
        cin >> a >> t >> b >> t >> c;
        if (t == '/') {
            swap(a, b);
        }
        cout << setfill('0') << setw(2) << a << "." << setw(2) << b << "."
             << setw(4) << c << " " << setw(2) << b << "/" << setw(2) << a
             << "/" << setw(4) << c << endl;
    }
    return 0;
}