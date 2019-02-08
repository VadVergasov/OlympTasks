#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, tmp;
    in >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
    }
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += a[i] % a[j];
        }
    }
    out << sum;
    return 0;
}
