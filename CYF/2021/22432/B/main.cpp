#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, even = 0, odd = 0;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
        if (i % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    if (odd % 2 == 1) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}
