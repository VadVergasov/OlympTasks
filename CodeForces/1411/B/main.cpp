#include <bits/stdc++.h>

using namespace std;

bool check(long long n) {
    long long n1 = n;
    while (n1) {
        if (n1 % 10 != 0 && n % (n1 % 10) != 0) {
            return false;
        }
        n1 /= 10;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        while (!check(n)) {
            n++;
        }
        cout << n << "\n";
    }
    return 0;
}
