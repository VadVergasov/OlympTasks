#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    vector<string> a;
    int n, m;
    in >> n >> m;
    for (int i = 1; i <= n; i++) {
        a.push_back(to_string(i));
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (to_string(m) == a[i]) {
            out << i + 1;
            return 0;
        }
    }
    return 0;
}