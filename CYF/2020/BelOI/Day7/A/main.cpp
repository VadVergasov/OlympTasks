#include <bits/stdc++.h>

#pragma GCC optimize("O3,no-stack-protector,unroll-loops")

using namespace std;

vector<long long> facts;

long long fact(int n) {
    if (n == 1) {
        return 1;
    }
    if (facts[n] != 1) {
        return facts[n];
    }
    facts[n] = fact(n - 1) * n;
    return facts[n];
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    facts.resize(n + 1, 1);
    vector<int> a, b(n);
    iota(b.begin(), b.end(), 1);
    long long mid = fact(n) / 2 - 1;
    int l = n - 1;
    while (mid != 0) {
        long long f = fact(l), i = 1;
        while (f <= mid) {
            f += fact(l);
            i++;
        }
        i--;
        f -= fact(l);
        a.push_back(b[i]);
        b.erase(b.begin() + i);
        l--;
        mid -= f;
    }
    for (int i = 0; i < b.size(); i++) {
        a.push_back(b[i]);
    }
    for (auto i : a) {
        out << i << " ";
    }
    out << "\n";
    next_permutation(a.begin(), a.end());
    for (auto i : a) {
        out << i << " ";
    }
    return 0;
}