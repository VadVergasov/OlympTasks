#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, t;
    cin >> n >> t;
    vector<long long> a(t);
    for (auto &i : a) {
        cin >> i;
    }
    vector<pair<pair<long long, long long>, long long>> girls(n);
    for (auto &[f, s] : girls) {
        cin >> f.first >> f.second >> s;
    }
    int l = 0;
    long long sum = 0;
    for (int i = 0; i < t; i++) {
        while (girls[l].first.second < i) {
            l++;
        }
        if (a[i] == 0) {
            continue;
        }
        int mx = 0;
        while () }
    return 0;
}