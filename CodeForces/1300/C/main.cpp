// https://codeforces.com/contest/1300/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    for (long long i = 32; i >= 0; i--) {
        long long num = 0;
        for (auto j : a) {
            if (j & (1LL << i)) {
                num++;
            }
        }
        if (num == 1) {
            long long number = -1;
            for (auto j : a) {
                if (j & (1LL << i)) {
                    number = j;
                    cout << j << " ";
                    break;
                }
            }
            for (auto j : a) {
                if (j == number) {
                    continue;
                }
                cout << j << " ";
            }
            return 0;
        }
    }
    for (auto i : a) {
        cout << i << " ";
    }
    return 0;
}