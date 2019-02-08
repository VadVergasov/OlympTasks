#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<int> a(n), res(n, 1);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    for (int i = 0; i < a.size(); i--) {
        if (a[i] != 0) {
        }
    }
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    return 0;
}