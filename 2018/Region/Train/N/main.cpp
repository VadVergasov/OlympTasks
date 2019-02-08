#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long k, tmp;
    in >> k;
    vector<long long> o;
    for (int i = 0; i < k; i++) {
        in >> tmp;
        vector<long long> r;
        bool f = false;
        while (tmp) {
            r.push_back(tmp % 2);
            tmp /= 2;
        }
        reverse(r.begin(), r.end());
        for (int j = 0; j < r.size(); j++) {
            if (r[j] == 0) {
                r[j] = 1;
                f = true;
                break;
            }
        }
        if (!f) {
            r.back() = 0;
        }
        long long res = 0;
        for (int j = 0; j < r.size(); j++) {
            res += r[j] * pow(2, r.size() - j - 1);
        }
        o.push_back(res);
    }
    for (int i = 0; i < k - 1; i++) {
        out << o[i] << " ";
    }
    out << o.back();
    return 0;
}
