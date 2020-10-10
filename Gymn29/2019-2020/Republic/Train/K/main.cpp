#include <bits/stdc++.h>

#pragma GCC optimize("O3,no-stack-protector,unroll-loops")

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n;
    in >> n;
    int cur = 1, i = 1;
    while (cur < n) {
        cout << cur << endl;
        int mx = 0, num = cur;
        while (num) {
            mx = max(mx, num % 10);
            num /= 10;
        }
        w cur += mx;
        i++;
    }
    if (cur == n) {
        out << i;
    } else {
        out << -1;
    }
    return 0;
}