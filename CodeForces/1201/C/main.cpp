#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    sort(a.begin(), a.end());
    while (k) {
        a[a.size() / 2]++;
        if (a[a.size() / 2] > a[a.size() / 2 + 1]) {
            sort(a.begin(), a.end());
        }
        k--;
    }
    cout << a[a.size() / 2];
    return 0;
}