#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("forest.in");
    ofstream out("forest.out");
    long long a, b, k, m, x;
    cin >> a >> k >> b >> m >> x;
    int sum = 0, i = 1;
    while (sum < x) {
        if (i % k != 0) {
            sum += a;
        }
        if (i % m != 0) {
            sum += b;
        }
        i++;
    }
    cout << i - 1;
    return 0;
}