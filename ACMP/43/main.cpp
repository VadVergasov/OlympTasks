#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, cur = 0, res = 0;
    char tmp;
    while (in >> tmp) {
        if (tmp == '0') {
            cur++;
        } else {
            res = max(res, cur);
            cur = 0;
        }
    }
    res = max(res, cur);
    out << res;
    return 0;
}
