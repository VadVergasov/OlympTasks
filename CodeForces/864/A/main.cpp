// https://codeforces.com/contest/864/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> a;
    multiset<int> b;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.insert(t);
        b.insert(t);
    }
    if (a.size() != 2 || b.count(*a.begin()) != n / 2) {
        cout << "NO";
    } else {
        cout << "YES\n";
        cout << *a.begin() << " " << *(++a.begin());
    }
    return 0;
}