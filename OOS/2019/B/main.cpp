#include <bits/stdc++.h>

using namespace std;

long long flr(long long start, vector<long long> &shift, long long h) {
    long long res = start;
    for (int i = 0; i < shift.size(); i++) {
        res += shift[i];
        if (res < 1 || res > h) {
            return 0;
        }
    }
    return res;
}

int main() {
    long long n, h;
    cin >> n >> h;
    vector<long long> shift(n);
    for (int i = 0; i < n; i++) {
        char t;
        int a;
        cin >> t >> a;
        if (t == 'u') {
            shift[i] = a;
        } else {
            shift[i] = -a;
        }
    }
    return 0;
}