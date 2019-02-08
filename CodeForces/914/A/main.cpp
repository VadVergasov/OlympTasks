#include <bits/stdc++.h>

using namespace std;

int main() {
    short int n;
    int res = -1000000;
    cin >> n;
    vector<int> a;
    int tmp;
    for (short int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for (short int i = 0; i < n; i++) {
        if ((double)(sqrt(a[i])) != (long int)(sqrt(a[i]))) {
            res = max(res, a[i]);
        }
    }
    cout << res;
    return 0;
}
