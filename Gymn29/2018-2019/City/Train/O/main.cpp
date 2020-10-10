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
            dif = min(tolower(s[i]) - 'a', 'z' - tolower(s[i])) + 1;
            if (dif == 'z' - tolower(s[i]) + 1) {
                dif *= -1;
            }
            break;
        }
    }
    cout << dif;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            char c = tolower(s[i]) - dif;
            if ((int)c < (int)'a') {
                cout << (int)s[i] << " " << (int)c;
                c = 'z' - ('a' - c) + 1;
            }
            if (c > 'z') {
                c = 'a' + (c - 'z') - 1;
            }
            if (islower(s[i])) {
                out << (char)c;
            } else {
                out << (char)toupper(c);
            }
        } else {
            cout << s[i];
            out << s[i];
        }
    }
    return 0;
}
