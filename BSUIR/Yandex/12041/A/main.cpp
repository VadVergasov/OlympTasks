#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long res = 0;
    int n;
    in >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    for (int i = 0; i < n; i++) {
        set<int> num;
        for (int j = i; j >= 0; j--) {
            num.insert(a[j]);
            res += num.size();
        }
    }
    out << res;
    return 0;
}