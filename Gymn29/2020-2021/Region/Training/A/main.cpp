#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    double x;
    cin >> x;
    long long n;
    cin >> n;
    long long a = atoi(to_string(x).substr(2, to_string(x).size()).c_str()),
              b = pow(10, to_string(x).size() - 2);
    long long g = __gcd(a, b);
    a /= g;
    b /= g;
    long long res = 0;
    for (long long i = 1; i <= n; i++) {
        long long gcd = __gcd(i, b);
        long long to = i * b / gcd;
        long long cur = 1;
        while (cur * (to / i) <= a * (to / b)) {
            if (__gcd(cur, i) == 1) {
                res++;
            }
            cur++;
        }
    }
    cout << res;
    return 0;
}