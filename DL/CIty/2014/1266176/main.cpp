#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    string s;
    getline(in, s);
    int dif = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            dif = min(tolower(s[i]) - 'a', 'z' - tolower(s[i]));
            if (dif == 'z' - tolower(s[i])) {
                dif *= -1;
            }
            break;
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            char c = tolower(s[i]) - dif;
            if (c < 'a') {
                c = 'z' - ('a' - c) + 1;
            }
            if (c > 'z') {
                c = 'a' + (c - 'z');
            }
            if (islower(s[i])) {
                out << (char)c;
            } else {
                out << (char)toupper(c);
            }
        } else {
            out << s[i];
        }
    }
    return 0;
}