#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, k;
    in >> n >> k;
    vector<int> a(n);
    for (auto &i : a) {
        in >> i;
    }
    int num = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            num++;
        }
    }
    cout << max(num - k, 0);
    return 0;
}