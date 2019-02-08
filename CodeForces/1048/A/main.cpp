#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 3 != 0) {
        cout << -1;
        return 0;
    }
    cout << n / 3 - 1 << " " << n / 3 << " " << n / 3 + 1;
    return 0;
}
