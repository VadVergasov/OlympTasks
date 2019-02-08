#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    double x1, y1, r1, x2, y2, r2;
    in >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    if (sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) <= r1 + r2 &&
        sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) + r1 >= r2 &&
        sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) + r2 >= r1) {
        out << "YES";
    } else {
        out << "NO";
    }
    return 0;
}
