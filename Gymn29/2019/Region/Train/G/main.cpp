#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    int m;
    cin >> m;
    int pos[3] = {0, 1, 2};
    int sum = a[pos[0]] + a[pos[1]] + a[pos[2]];
    int change = 2;
    while (sum > m) {
        if (pos[change] == a.size() - 1) {
            change--;
        }
        pos[change]++;
        sum = a[pos[0]] + a[pos[1]] + a[pos[2]];
    }
    cout << sum;
    return 0;
}