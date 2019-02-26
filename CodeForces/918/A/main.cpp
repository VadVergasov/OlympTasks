#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n; i++) {
        s += 'o';
    }
    int a = 1, b = 1;
    while (a <= n) {
        s[a - 1] = 'O';
        a += b;
        swap(a, b);
    }
    cout << s;
    return 0;
}