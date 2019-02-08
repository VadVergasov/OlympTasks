#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, tmp;
    in >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        if (tmp % 2 == 0) {
            a.push_back(tmp);
        } else {
            b.push_back(tmp);
        }
    }
    for (int i = 0; i < b.size(); i++) {
        out << b[i] << " ";
    }
    out << "\n";
    for (int i = 0; i < a.size(); i++) {
        out << a[i] << " ";
    }
    out << "\n";
    if (a.size() >= b.size()) {
        out << "YES";
    } else {
        out << "NO";
    }
    return 0;
}
