#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    deque<char> s(1);
    in >> s[0];
    string s1;
    in >> s1;
    for (int i = 0; i < s1.size(); i++) {
        if (s.front() >= s1[i]) {
            s.push_front(s1[i]);
        } else {
            s.push_back(s1[i]);
        }
    }
    for (auto i : s) {
        out << i;
    }
    return 0;
}