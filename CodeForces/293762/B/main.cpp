#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a(4);
    for (auto &i : a) {
        cin >> i;
    }
    sort(a.begin(), a.end());
    do {
        for (int i = 1; i < 4; i++) {
            int sum1 = 0, sum2 = 0;
            for (int j = 0; j < i; j++) {
                sum1 += a[j];
            }
            for (int j = i; j < 4; j++) {
                sum2 += a[j];
            }
            if (sum1 == sum2) {
                cout << "YES";
                return 0;
            }
        }
    } while (next_permutation(a.begin(), a.end()));
    cout << "NO";
    return 0;
}