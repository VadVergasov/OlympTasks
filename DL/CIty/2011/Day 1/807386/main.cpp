#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n;
    char tmp;
    in >> n;
    vector<char> a;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
    }
    if (n == 1) {
        cout << 0;
        return 0;
    }
    int ot[] = {0, 0};
    ot[a[0] - '0']++;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            ot[a[i + 1] - '0']++;
        }
    }
    out << min(ot[0], ot[1]);
    return 0;
}
