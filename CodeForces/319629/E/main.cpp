#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (auto &i : a) {
        cin >> i;
    }
    long long added = 0;
    for (int i = n; i > 0; i--) {
        if ((a[i] + added) % i != 0) {
            cout << "No";
            return 0;
        }
        added += (a[i] + added) / i;
    }
    cout << "Yes";
    return 0;
}
