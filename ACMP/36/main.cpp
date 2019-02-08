#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    vector<char> prime(2 * n + 5, true);
    for (int i = 2; i <= sqrt(2 * n); i++) {
        if (!prime[i]) {
            continue;
        }
        for (int j = i * i; j < 2 * n; j += i) {
            prime[j] = false;
        }
    }
    int res = 0;
    for (int i = n + 1; i < 2 * n; i++) {
        if (prime[i]) {
            res++;
        }
    }
    out << res;
    return 0;
}
