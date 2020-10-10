#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    string s;
    getline(in, s);
    int dif = 0;
    int i = 0;
    while (!isalpha(s[i])) {
        i++;
    }
    if (isupper(s[i])) {
        dif = s[i] - 'A';
    } else if (islower(s[i])) {
        dif = s[i] - 'a';
    }
    for (i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            s[i] -= dif;
            if (s[i] < 'A') {
                s[i] += 26;
            }
        } else if (islower(s[i])) {
            s[i] -= dif;
            if (s[i] < 'a') {
                s[i] += 26;
            }
        }
    }
    out << s;
    return 0;
}