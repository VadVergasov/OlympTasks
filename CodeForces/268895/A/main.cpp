// https://codeforces.com/group/kubgwEbWlB/contest/268895/problem/0
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (/*(n % 2 != m % 2 && __gcd(max(n, m), min(n, m)) == 1) ||*/
        (n == 1 && m != 1) || (m == 1 && n != 1) /*||
        (__gcd(max(n, m), min(n, m)) == 1 && n != 1 && m != 1)*/) {
        if (n == 1 && m == 2) {
            cout << "NO\n";
            return 0;
        }
        cout << "NO";
        return 1;
    }
    cout << "YES\n";
    if (n < m) {
        for (int i = 0; i < n; i += __gcd(max(n, m), min(n, m))) {
            for (int j = 0; j < m; j += __gcd(max(n, m), min(n, m))) {
                for (int k = 0; k < __gcd(max(n, m), min(n, m)); k++) {
                    if (k % 2 == 0) {
                        for (int z = 0; z < k; z++) {
                            cout << i + k + 1 << " " << j + z + 1 << "\n"
                                 << j + z + 1 << " " << i + k + 1 << "\n";
                        }
                        cout << i + k + 1 << " " << j + k + 1 << "\n";
                    } else {
                        cout << i + k + 1 << " " << j + k + 1 << "\n";
                        for (int z = 0; z < k; z++) {
                            cout << i + k + 1 << " " << j + z + 1 << "\n"
                                 << j + z + 1 << " " << i + k + 1 << "\n";
                        }
                    }
                }
            }
        }
    } else {
        for (int i = 0; i < n; i += __gcd(max(n, m), min(n, m))) {
            for (int j = 0; j < m; j += __gcd(max(n, m), min(n, m))) {
                for (int k = 0; k < __gcd(max(n, m), min(n, m)); k++) {
                    if (k % 2 == 0) {
                        for (int z = 0; z < k; z++) {
                            cout << i + k + 1 << " " << j + z + 1 << "\n"
                                 << j + z + 1 << " " << i + k + 1 << "\n";
                        }
                        cout << i + k + 1 << " " << j + k + 1 << "\n";
                    } else {
                        cout << i + k + 1 << " " << j + k + 1 << "\n";
                        for (int z = 0; z < k; z++) {
                            cout << i + k + 1 << " " << j + z + 1 << "\n"
                                 << j + z + 1 << " " << i + k + 1 << "\n";
                        }
                    }
                }
            }
        }
    }
    return 0;
}