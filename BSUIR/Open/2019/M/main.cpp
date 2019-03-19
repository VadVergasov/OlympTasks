#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, n1, last = -1;
    cin >> n;
    string s1 = "", s2 = "";
    n1 = n;
    while (n > 0) {
        if (last != 2 && n - 2 != 2 && n > 1) {
            s1 += "2";
            n -= 2;
            last = 2;
        } else if (last != 1 && n - 1 != 1) {
            s1 += "1";
            n--;
            last = 1;
        } else if (n > 3) {
            s1 += "3";
            n -= 3;
            last = 3;
        }
    }
    last = -1;
    while (n1 > 0) {
        if (last != 1 && n1 - 1 != 1) {
            s2 += "1";
            n1--;
            last = 1;
        } else if (last != 2 && n1 - 2 != 2 && n1 > 1) {
            s2 += "2";
            n1 -= 2;
            last = 2;
        } else if (n1 > 3) {
            s2 += "3";
            n1 -= 3;
            last = 3;
        } else if (n1 == last) {
            s2 = "";
            break;
        }
    }
    if (s2.size() > s1.size()) {
        cout << s2;
    } else {
        cout << max(s1, s2);
    }
    return 0;
}