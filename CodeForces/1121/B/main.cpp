#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), sum(200002, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            sum[a[i] + a[j]]++;
        }
    }
    sort(sum.rbegin(), sum.rend());
    cout << sum.front();
    return 0;
}