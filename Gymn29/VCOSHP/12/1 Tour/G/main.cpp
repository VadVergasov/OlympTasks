#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("shift.in");
    ofstream out("shift.out");
    string s = "", t;
    while (in >> t) {
        s += t;
    }
    int res = 0;
    bool shift = false;
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) {
            shift = false;
        } else if (isupper(s[i])) {
            if (!shift) {
                res++;
                shift = true;
            }
        }
    }
    out << res;
    return 0;
}