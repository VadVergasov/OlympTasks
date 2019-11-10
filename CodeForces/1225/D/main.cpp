#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<set<int>, map<int, int> > mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        map<int, int> div, t;
        set<int> uni;
        while (a[i] % 2 == 0) {
            div[2]++;
            a[i] /= 2;
        }
        for (int j = 3; j <= sqrt(a[i]); j += 2) {
            while (a[i] % j == 0) {
                div[j]++;
            }
        }
        for (auto j : div) {
            uni.insert(j.first);
        }
        t = mp[uni];
        for (auto j : t) {
            j.second += div[j.first];
        }
    }
    return 0;
}