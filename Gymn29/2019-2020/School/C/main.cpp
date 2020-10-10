#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    a *= 1000;
    b *= 1000;
    int i = 3;
    while (a - b >= 1000) {
        a -= b;
        swap(a, b);
        i++;
    }
    cout << i;
    return 0;
}