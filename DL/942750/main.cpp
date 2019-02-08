#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n;
    in >> n;
    vector<int> a;
    for (int i = 2; i <= ceil(sqrt(n)); i++) {
        if (n % i == 0) {
            a.push_back(i);
            a.push_back(n / i);
        }
    }
    sort(a.begin(), a.end());
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] * 2 < n) {
            out << a[i];
            return 0;
        }
    }
    out << 1;
    return 0;
}
