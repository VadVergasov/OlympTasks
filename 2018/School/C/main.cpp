#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, tmp, num = 1, res = 0;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    a.push_back(-1);
    for (int i = 0; i < n; i++) {
        if (a[i] == a[i + 1]) {
            num++;
        } else {
            b.push_back(num);
            num = 1;
        }
    }
    for (int i = 0; i < b.size(); i++) {
        if (b[i] >= 10) {
            res++;
        }
    }
    cout << res;
    return 0;
}
