#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("forest.in");
    ofstream out("forest.out");
    long long a, b, k, m, x;
    in >> a >> k >> b >> m >> x;
    long long l = 0, r = x;
    while (l <= r) {
        long long mid = (l + r) / 2;
        if ((mid / k) * (k - 1) * a + (mid % k) * a + (mid / m) * (m - 1) * b +
                (mid % m) * b >
            x) {
            r = mid - 1;
        } else if ((mid / k) * (k - 1) * a + (mid % k) * a +
                       (mid / m) * (m - 1) * b + (mid % m) * b <
                   x) {
            l = mid + 1;
        } else {
            if (mid % k == 0 && mid % m == 0) {
                mid--;
            }
            l = mid;
            break;
        }
    }
    out << l;
    return 0;
}