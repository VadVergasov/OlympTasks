// Main code for this task.
// Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void replace(char &c, char s, char e) { c += e - s; }

void replace_c(string &s) {
    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (tolower(s[i]) == 'c' &&
            (tolower(s[i + 1]) == 'e' || tolower(s[i + 1]) == 'i' ||
             tolower(s[i + 1]) == 'y')) {
            replace(s[i], 'c', 's');
        } else if (tolower(s[i]) == 'c') {
            replace(s[i], 'c', 'k');
        }
    }
}

void replace_qu(string &s) {
    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (tolower(s[i]) == 'q' && tolower(s[i + 1]) == 'u') {
            replace(s[i], 'q', 'k');
            replace(s[i + 1], 'u', 'v');
        }
    }
}

void replace_x(string &s) {
    for (int i = 0; i < (int)s.size(); i++) {
        if (tolower(s[i]) == 'x') {
            replace(s[i], 'x', 'k');
            s.insert(s.begin() + i + 1, 's');
        }
    }
}

void replace_w(string &s) {
    for (int i = 0; i < (int)s.size(); i++) {
        if (tolower(s[i]) == 'w') {
            replace(s[i], 'w', 'v');
        }
    }
}

void replace_ph(string &s) {
    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (tolower(s[i]) == 'p' && tolower(s[i + 1]) == 'h') {
            replace(s[i], 'p', 'f');
            s.erase(s.begin() + i + 1);
        }
    }
}

void replace_you(string &s) {
    for (int i = 0; i < (int)s.size() - 2; i++) {
        if (tolower(s[i]) == 'y' && tolower(s[i + 1]) == 'o' &&
            tolower(s[i + 2]) == 'u') {
            replace(s[i], 'y', 'u');
            s.erase(s.begin() + i + 1, s.begin() + i + 3);
        }
    }
}

void replace_oo(string &s) {
    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (tolower(s[i]) == 'o' && tolower(s[i + 1]) == 'o') {
            replace(s[i], 'o', 'u');
            s.erase(s.begin() + i + 1);
        }
    }
}

void replace_ee(string &s) {
    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (tolower(s[i]) == 'e' && tolower(s[i + 1]) == 'e') {
            replace(s[i], 'e', 'i');
            s.erase(s.begin() + i + 1);
        }
    }
}

void replace_th(string &s) {
    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (tolower(s[i]) == 't' && tolower(s[i + 1]) == 'h') {
            replace(s[i], 't', 'z');
            s.erase(s.begin() + i + 1);
        }
    }
}

void remove_letters(string &s) {
    for (int i = 0; i < (int)s.size(); i++) {
        if (tolower(s[i]) == 'c' || tolower(s[i]) == 'q' ||
            tolower(s[i]) == 'w' || tolower(s[i]) == 'x') {
            s.erase(s.begin() + i);
        }
    }
}

void remove_doubles(string &s) {
    for (int i = 0; i < (int)s.size() - 1; i++) {
        if (tolower(s[i]) == tolower(s[i + 1])) {
            s.erase(s.begin() + i + 1);
            i--;
        }
    }
}

int main() {
    string s;
    ifstream in("input.txt");
    ofstream out("output.txt");
    while (!in.eof()) {
        getline(in, s);
        replace_c(s);
        replace_qu(s);
        replace_x(s);
        replace_w(s);
        replace_ph(s);
        replace_you(s);
        replace_oo(s);
        replace_ee(s);
        replace_th(s);
        remove_letters(s);
        remove_doubles(s);
        out << s << endl;
    }
    return 0;
}
