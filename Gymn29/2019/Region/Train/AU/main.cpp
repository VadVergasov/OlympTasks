#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t == 0) {
            num1++;
        } else if (num1 == 1) {
            num2++;
        }
    }
    if (num1 == 0) {
        cout << -1;
    } else if (num1 == 1) {
        cout << -2;
    } else {
        cout << num2;
    }
    return 0;
}