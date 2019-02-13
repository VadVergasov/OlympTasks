#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << max(a.back() * a[a.size() - 2], a.front() * a[1]);
    return 0;
}