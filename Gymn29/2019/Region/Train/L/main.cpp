#include <bits/stdc++.h>

using namespace std;

int mon[13] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int v, k, tmp1, tmp2, res1 = 0, res2 = 0;
    char d;
    in >> v >> k;
    if (v == 1) {
        for (int i = 2; i < 13; i++) {
            mon[i]++;
        }
    }
    for (int i = 0; i < k; i++) {
        in >> tmp1 >> d >> tmp2;
        if ((mon[tmp2 - 1] + tmp1) % 5 == 0) {
            res2 += 3;
        } else if ((mon[tmp2 - 1] + tmp1) % 5 == 3 ||
                   (mon[tmp2 - 1] + tmp1) % 5 == 4) {
            res1 += 3000;
        } else if ((mon[tmp2 - 1] + tmp1) % 5 == 2) {
            res1 += 5000;
        } else if ((mon[tmp2 - 1] + tmp1) % 5 == 1) {
            res1 += 1000;
        }
    }
    out << res1 << " " << res2;
    return 0;
}
