#include <bits/stdc++.h>

using namespace std;

int main() {
    long long b;
    cin >> b;
    set<long long> c;
    long long last = 0, cur = 1;
    while (last != 1) {
        last = b / __gcd(b, cur);
        cur++;
        c.insert(last);
    }
    cout << c.size();
    return 0;
}
