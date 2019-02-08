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
    int sum = 0;
    for (int i = 0; i < floor(n / 2.0) + 1; i++) {
        sum += floor(a[i] / 2.0) + 1;
    }
    out << sum;
    return 0;
}