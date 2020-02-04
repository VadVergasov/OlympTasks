#include <bits/stdc++.h>
const long double EPS = 1e-9;
using namespace std;

int main() {
    vector<long double> ar(3);
    for (auto &i : ar) cin >> i;
    sort(ar.begin(), ar.end());
    bool ans = 0;

    do {
        //   cout << ar[2] - ar[1] << '\n';
        if (ar[2] - ar[1] == ar[0]) {
            ans = 1;
            break;
        }
    } while (next_permutation(ar.begin(), ar.end()));
    if (ans)
        for (auto i : ar) cout << fixed << setprecision(0) << i << " ";

    else {
        cout << "-1 -1 -1\n";
    }

    return 0;
}