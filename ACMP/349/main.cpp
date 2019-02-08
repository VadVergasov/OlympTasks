#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> m >> n;
    vector<char> prime(n + 1, 1);
    for (int i = 2; i <= sqrt(n); i++) {
        if (!prime[i]) {
            continue;
        }
        for (int j = i * i; j <= n; j += i) {
            prime[j] = 0;
        }
    }
    int c = 0;
    for (int i = m; i <= n; i++) {
        if (prime[i]) {
            c++;
            out << i << "\n";
        }
    }
    if (c == 0) {
        out << "Absent";
    }
    return 0;
}
