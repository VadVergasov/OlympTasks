#include <bits/stdc++.h>

using namespace std;

int main() {
    double n, tmp, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        sum += tmp;
    }
    cout << fixed << setprecision(4) << sum / n;
    return 0;
}
