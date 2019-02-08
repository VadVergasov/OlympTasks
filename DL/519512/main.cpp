#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n, tmp2;
    in >> n;
    vector<int> a;
    char tmp1;
    for (int i = 0; i < n - 1; i++) {
        in >> tmp1 >> tmp2;
        if (tmp1 == 'F') {
            a.insert(a.begin(), tmp2);
        } else {
            a.push_back(tmp2);
        }
        out << a[floor((double)(a.size() + 1) / 2.0) - 1] << "\n";
    }
    return 0;
}
