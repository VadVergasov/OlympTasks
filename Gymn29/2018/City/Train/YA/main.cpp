#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n, tmp;
    in >> n;
    vector<long long> a;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
    }
    reverse(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        out << a[i] << " ";
    }
    return 0;
}
