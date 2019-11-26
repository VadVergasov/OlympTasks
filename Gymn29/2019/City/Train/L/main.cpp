#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    in.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    in >> n;
    map<int, int> d;
    for (int i = 0; i < n; i++) {
        long long t;
        in >> t;
        while (t % 2 == 0) {
            t /= 2;
            d[2]++;
            if (d[2] > 1) {
                out << 2;
                return 0;
            }
        }
        int last = 10e5;
        for (int j = 3; j <= last; j += 2) {
            while (t % j == 0) {
                t /= j;
                d[j]++;
                if (d[j] > 1) {
                    out << j;
                    return 0;
                }
            }
        }
    }
    out << "Beautiful";
    return 0;
}