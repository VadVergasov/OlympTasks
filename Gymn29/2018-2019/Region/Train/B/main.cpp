#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    string xs;
    long long res = 0;
    int n;
    in >> xs >> n;
    float x = atof(xs.c_str());
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= floor(x * (float)i); j++) {
            if (__gcd(j, i) == 1) {
                res++;
            }
        }
    }
    out << res;
    return 0;
}
