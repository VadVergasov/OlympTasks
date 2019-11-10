#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n, tmp, res = 0, num = 0;
    in >> n;
    vector<long long> a;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    int i = 0;
    while (n > 0) {
        int t = min(a[i], (long long)ceil(n / 2.0));
        res += t;
        n -= t * 2;
        i++;
    }
    cout << res;
    return 0;
}