#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    string s1, s2;
    in >> s1 >> s2;
    int l = 0, r = n - 1;
    while (s1[l] == s2[l]) {
        l++;
    }
    while (s1[r] == s2[r]) {
        r--;
    }
    if (l > r) {
        out << "Yes\n1 1";
        return 0;
    }
    string t = s2.substr(l, r - l + 1);
    reverse(t.begin(), t.end());
    if (t == s1.substr(l, r - l + 1)) {
        out << "Yes\n" << l + 1 << " " << r + 1;
    } else {
        out << "No";
    }
    return 0;
}