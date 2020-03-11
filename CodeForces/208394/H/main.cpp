#include <bits/stdc++.h>

using namespace std;

int main() {
    int B;
    cin >> B;
    int a, b;
    char t;
    cin >> a >> t >> b;
    cout << B - a * (B / b);
    return 0;
}