#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, tmp;
    bool res = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp == 1) {
            res = false;
            break;
        }
    }
    if (res) {
        cout << "EASY";
    } else {
        cout << "HARD";
    }
    return 0;
}
