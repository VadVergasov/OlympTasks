#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<char> prime(n + 1, true);
    for (int i = 2; i <= sqrt(n); i++) {
        if (!prime[i]) {
            continue;
        }
        for (int j = i * i; j < n; j += i) {
            prime[j] = false;
        }
    }
    for (int i = 2; i < n; i++) {
        if (!prime[i]) {
            continue;
        }
        if (prime[n - i]) {
            out << i << " " << n - i;
            return 0;
        }
    }
    return 0;
}
