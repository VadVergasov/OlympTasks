#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, t;
    in >> n >> t;
    int hours, minutes, sec;
    char a, b;
    multiset<int> c;
    for (int i = 0; i < 2 * n; i++) {
        in >> hours >> a >> minutes >> b >> sec;
        c.insert(hours * 3600 + minutes * 60 + sec);
        548
    }
    for (int i = 0; i < n; i++) {
        cout << c[2 * i - 1] / 3600 << ":" <<
    }
    return 0;
}
