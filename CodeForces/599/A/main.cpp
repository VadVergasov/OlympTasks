#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(2 * a + 2 * b,
                min(a + c + b, min(2 * a + 2 * c, 2 * b + 2 * c)));
    return 0;
}
