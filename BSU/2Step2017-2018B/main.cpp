#include <bits/stdc++.h>

using namespace std;

ofstream out("output.txt");
ifstream in("input.txt");

int main() {
    vector<int> alf(26, 0);
    string s;
    in >> s;
    for (int i = 0; i < s.size(); i++) {
        alf[s[i] - 'a']++;
    }
    int g;
    for (int i = 0; i < alf.size(); i++) {
        if (alf[i] == 0) {
            continue;
        }
        g = __gcd(g, alf[i]);
    }
    if (mn == 1) {
        sort(s.begin(), s.end());
        out << s;
        return 0;
    }
    for (int i = 0; i < alf.size(); i++) {
        if (alf[i] == 0) {
            continue;
        }
        out << (char)('a' + i);
    }
    return 0;
}
