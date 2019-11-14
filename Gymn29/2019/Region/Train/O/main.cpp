#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int q;
    in >> q;
    for (int i = 0; i < q; i++) {
        string s;
        in >> s;
        int res = 0;
        for (int j = 0; j < 4; j++) {
            if (s[j] == '9' || s[j] == '7' || s[j] == '6' || s[j] == '5' ||
                s[j] == '3' || s[j] == '2' || s[j] == '1') {
                res++;
            }
        }
        if (res % 2 == 1) {
            out << "Y";
        } else {
            out << "N";
        }
    }
    return 0;
}