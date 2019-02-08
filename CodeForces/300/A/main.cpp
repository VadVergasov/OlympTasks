#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, tmp;
    cin >> n;
    int a[3] = {0, 0, 0};
    vector<int> b;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp == 0) {
            a[0]++;
        } else if (tmp > 0) {
            a[1]++;
        } else {
            a[2]++;
        }
        b.push_back(tmp);
    }
    sort(b.begin(), b.end());
    if (a[1] == 0) {
        if (a[2] % 2 == 1) {
            cout << a[2] - 2 << " ";
            for (int i = 0; i < a[2] - 2; i++) {
                cout << b[i] << " ";
            }
            cout << endl << 2 << " ";
            for (int i = 0; i < 2; i++) {
                cout << b[a[2] - i - 1] << " ";
            }
            cout << endl << a[0] << " ";
            for (int i = 0; i < a[0]; i++) {
                cout << b[a[2] + i] << " ";
            }
        } else {
            cout << a[2] - 3 << " ";
            for (int i = 0; i < a[2] - 3; i++) {
                cout << b[i] << " ";
            }
            cout << endl << 2 << " ";
            for (int i = 0; i < 2; i++) {
                cout << b[a[2] - i - 2] << " ";
            }
            cout << endl << a[0] + 1 << " ";
            for (int i = 0; i < a[0]; i++) {
                cout << b[a[2] + i] << " ";
            }
            cout << b[a[2] - 1];
        }
    } else {
        if (a[2] % 2 == 1) {
            cout << a[2] << " ";
            for (int i = 0; i < a[2]; i++) {
                cout << b[i] << " ";
            }
            cout << endl << a[1] << " ";
            for (int i = 0; i < a[1]; i++) {
                cout << b[a[2] + a[0] + i] << " ";
            }
            cout << endl << a[0] << " ";
            for (int i = 0; i < a[0]; i++) {
                cout << b[a[2] + i] << " ";
            }
        } else {
            cout << a[2] - 1 << " ";
            for (int i = 0; i < a[2] - 1; i++) {
                cout << b[i] << " ";
            }
            cout << endl << a[1] << " ";
            for (int i = 0; i < a[1]; i++) {
                cout << b[a[2] + a[0] + i] << " ";
            }
            cout << endl << a[0] + 1 << " ";
            for (int i = 0; i < a[0]; i++) {
                cout << b[a[2] + i] << " ";
            }
            cout << b[a[2] - 1];
        }
    }
    return 0;
}
