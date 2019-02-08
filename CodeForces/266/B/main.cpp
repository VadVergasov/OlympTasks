#include <bits/stdc++.h>

using namespace std;

int main() {
    short int n, t;
    cin >> n >> t;
    char a[n];
    for (short int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (short int j = 0; j < t; j++) {
        for (short int i = 0; i < n; i++) {
            if (a[i] == 'B' && a[i + 1] == 'G') {
                swap(a[i], a[i + 1]);
                i++;
            }
        }
    }
    for (short int i = 0; i < n; i++) {
        cout << a[i];
    }
    return 0;
}
