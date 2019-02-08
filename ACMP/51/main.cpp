#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    string s;
    in >> s;
    long long res = 0, cur;
    if (n % s.size() == 0) {
        res = s.size();
        cur = res;
    } else {
        res = n % s.size();
        cur = res;
    }
    while (cur != n) {
        cur += s.size();
        res *= cur;
    }
    out << res;
    return 0;
}
