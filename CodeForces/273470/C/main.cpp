#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> horizont(1000);
    for (long long i = 0; i < n; i++) {
        long long a, b, h;
        cin >> a >> b >> h;
        a--;
        b--;
        for (int j = a; j < b; j++) {
            horizont[j] = max(horizont[j], h);
        }
    }
    long long res = 0;
    for (int i = 0; i < 1000; i++) {
        res += horizont[i];
    }
    cout << res;
    return 0;
}