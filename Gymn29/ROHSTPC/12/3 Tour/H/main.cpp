#include <bits/stdc++.h>

using namespace std;

long long binpow(int n, int p) {
    long long res = 1;
    while (p) {
        if (p & 1) {
            res *= n;
        }
        n *= n;
        p >>= 1;
    }
    return res;
}

int main() {
    long long a, b, mx = -1, last;
    cin >> a >> b;
    if (a == b) {
        cout << "Stable\n0\n";
        return 0;
    }
    bool f = true;
    int as = to_string(a).size();
    for (int i = 0; i < 10 && f; i++) {
        for (int j = as; j < 18 && f; j++) {
            long long t = i;
            for (int k = 1; k <= j; k++) {
                t += binpow(10, k);
            }
            if ((t - a) % 9 == 0) {
                last = i;
                mx = t;
                f = false;
            }
        }
    }
    vector<pair<char, long long> > res;
    res.push_back(make_pair('+', (mx - a) / 9));
    res.push_back(make_pair('-', to_string(mx).size() - 1));
    mx = last;
    while (mx % 9 != b % 9) {
        if (mx == 0) {
            mx += 9;
            res.push_back(make_pair('+', 1));
        } else {
            mx -= 1;
            mx %= 10;
            res.push_back(make_pair('+', 1));
            res.push_back(make_pair('-', 1));
        }
    }
    if (mx != b) {
        res.push_back(make_pair('+', (b - mx) / 9));
    }
    cout << "Stable\n" << res.size() << "\n";
    for (auto i : res) {
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}