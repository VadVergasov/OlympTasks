#include <bits/stdc++.h>

using namespace std;

const int mod = 1000000007;

int main() {
    ifstream in("binary.in");
    ofstream out("binary.out");
    int n;
    in >> n;
    string s;
    in >> s;
    long long res = 0;
    if (s[0] == '0' && s[1] == '0') {
        out << 0;
        return 0;
    }
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] != '0') {
            for (int j = i - 1; j >= 0; j--) {
                if (s[j] == '0') {
                    break;
                }
            }
            res++;
            res %= mod;
        }
    }
    out << res - 1;
    return 0;
}