// https://codeforces.com/group/kubgwEbWlB/contest/268895/problem/C
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    unordered_map<char, int> c1, c2;
    for (int i = 0; i < s1.size(); i++) {
        c1[s1[i]]++;
    }
    for (int i = 0; i < s2.size(); i++) {
        c2[s2[i]]++;
    }

    return 0;
}