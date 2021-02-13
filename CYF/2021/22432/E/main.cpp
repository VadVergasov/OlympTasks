#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, long long> mp;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        mp[tmp]++;
    }
    long long res = 0;
    for (auto [i, j] : mp) {
        res += j * j;
    }
    cout << res;
    return 0;
}