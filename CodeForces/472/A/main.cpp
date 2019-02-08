#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << 4 << " " << n - 4;
        return 0;
    } else {
        cout << 9 << " " << n - 9;
        return 0;
    }
    return 0;
}
