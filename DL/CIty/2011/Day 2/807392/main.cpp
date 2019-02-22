#include <bits/stdc++.h>

using namespace std;

string add(string a) {
    if (a[a.size() - 1] < '9') {
        if (a[a.size() - 1] < '8') {
            if (a[a.size() - 1] < '6') {
                if (a[a.size() - 1] < '5') {
                    if (a[a.size() - 1] < '2') {
                        a[a.size() - 1] = '2';
                    } else {
                        a[a.size() - 1] = '5';
                    }
                } else {
                    a[a.size() - 1] = '6';
                }
            } else {
                a[a.size() - 1] = '8';
            }
        } else {
            a[a.size() - 1] = '9';
        }
    } else {
        int p = 1;
        a[a.size() - 1] = '0';
        for (int i = a.size() - 2; i >= 0; i--) {
            if (p == 1) {
                if (a[i] < '9') {
                    if (a[i] < '8') {
                        if (a[i] < '6') {
                            if (a[i] < '5') {
                                if (a[i] < '2') {
                                    a[i] = '2';
                                    p = 0;
                                } else {
                                    a[i] = '5';
                                    p = 0;
                                }
                            } else {
                                a[i] = '6';
                                p = 0;
                            }
                        } else {
                            a[i] = '8';
                            p = 0;
                        }
                    } else {
                        a[i] = '9';
                        p = 0;
                    }
                } else {
                    a[i] = '0';
                }
            } else {
                break;
            }
        }
        if (p == 1) {
            a.insert(a.begin(), '2');
        }
    }
    return a;
}

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    string all = "0258", s, res;
    in >> s;
    s = add(s);
    bool ready = false;
    while (!ready) {
        bool r = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '6' && s[s.size() - 1 - i] == '9' ||
                s[i] == '9' && s[s.size() - 1 - i] == '6') {
                continue;
            }
            bool in = false;
            for (int j = 0; j < 4; j++) {
                if (s[i] == all[j] && s[i] == s[s.size() - 1 - i]) {
                    in = true;
                }
            }
            if (in) {
                continue;
            }
            s = add(s);
            r = false;
        }
        ready = r;
    }
    out << s;
    return 0;
}
