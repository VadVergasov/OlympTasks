#include <bits/stdc++.h>

using namespace std;

int func(int a, int b) { return (a | b) - b; }

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) {
        cin >> i;
    }
    sort(a.begin(), a.end());
    /*for (auto i : a) {
        cout << i << " ";
    }*/
    int mx = 0, num = 0, i = 0;
    vector<int> res;
    while (next_permutation(a.begin(), a.end())) {
        vector<int> b = a;
        for (int i = 0; i < n - 1; i++) {
            b[i + 1] = func(b[i], b[i + 1]);
        }
        if (mx <= b.back()) {
            mx = b.back();
            res = a;
        }
        i++;
    }
    cout << mx << "\n";
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}