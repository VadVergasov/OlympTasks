#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    char a, b;
    int y1, y2;
    in >> a >> y1 >> b >> y2;
    int x1 = a - 'a', x2 = b - 'a';
    y1--;
    y2--;
    if ((abs(x1 - x2) == 2 && abs(y1 - y2) == 1) ||
        (abs(x1 - x2) == 1 && abs(y1 - y2) == 2)) {
        out << "Y";
    } else {
        out << "N";
    }
    if (!((abs(x1 - x2) == 2 && abs(y1 - y2) == 1) ||
          (abs(x1 - x2) == 1 && abs(y1 - y2) == 2)) &&
        ((abs(x1 - x2) == 4 && abs(y1 - y2) == 2) ||
         (abs(x1 - x2) == 3 && abs(y1 - y2) == 3) ||
         (abs(x1 - x2) == 2 && abs(y1 - y2) == 4))) {
        out << "Y";
    } else {
        out << "N";
    }
    if (abs(x1 - x2) < 2 && abs(y1 - y2) < 2) {
        out << "Y";
    } else {
        out << "N";
    }
    if (!(abs(x1 - x2) < 2 && abs(y1 - y2) < 2) && abs(x1 - x2) < 3 &&
        abs(y1 - y2) < 3) {
        out << "Y";
    } else {
        out << "N";
    }
    return 0;
}
