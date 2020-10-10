#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    long long mn = 10e17;
    long long sum = 0;
    int num = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] == num) {
            sum += a[i];
        } else {
            mn = min(mn, sum);
            sum = 0;
            num = a[i];
            sum += a[i];
        }
    }
    mn = min(mn, sum);
    cout << mn;
    return 0;
}