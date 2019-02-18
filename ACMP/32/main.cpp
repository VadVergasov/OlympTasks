#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a < b;
}

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
    ifstream in("input.txt");
    ofstream out("output.txt");
    int a, b;
    in >> a >> b;
    long long n = a, m = b;
    vector<short> n1, n2;
    while (n) {
        n1.push_back(abs(n % 10));
        n /= 10;
    }
    while (m) {
        n2.push_back(abs(m % 10));
        m /= 10;
    }
    if (a < 0) {
        sort(n1.rbegin(), n1.rend(), cmp);
    } else {
        sort(n1.begin(), n1.end(), cmp);
    }
    if (b < 0) {
        sort(n2.begin(), n2.end(), cmp);
    } else {
        sort(n2.rbegin(), n2.rend(), cmp);
    }
    n = m = 0;
    for (int i = 0; i < n1.size(); i++) {
        cout << n1[i] << " ";
        if (n1[i] == 0) {
            n *= 10;
            continue;
        }
        n += n1[i] * binpow(10, i);
    }
    cout << "\n";
    for (int i = 0; i < n2.size(); i++) {
        cout << n2[i] << " ";
        if (n2[i] == 0) {
            m *= 10;
            continue;
        }
        m += n2[i] * binpow(10, i);
    }
    cout << "\n" << n << " " << m << "\n";
    if (a < 0) {
        n *= -1;
    }
    if (b < 0) {
        m *= -1;
    }
    out << n - m;
    return 0;
}