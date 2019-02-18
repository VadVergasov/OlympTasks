#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    sort(a.begin(), a.end());
    long long res = 0;
    res = a[1] - a[0];
    res += a.back() - a[a.size() - 2];
    for (int i = 1; i < a.size() - 2; i++) {
        if (a[i + 1] - a[i] <= a[i + 2] - a[i + 1]) {
            res += a[i + 1] - a[i];
        } else {
            res += a[i + 2] - a[i + 1];
            i++;
        }
    }
    out << res;
    return 0;
}