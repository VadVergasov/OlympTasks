#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    string s, s1;
    in >> s;
    s1 = s;
    reverse(s1.begin(), s1.end());
    vector<vector<int> > a(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[i - 1] == s1[j - 1]) {
                a[i][j] = a[i - 1][j - 1] + 1;
            } else {
                a[i][j] = max(a[i - 1][j], )
            }
        }
    }
    return 0;
}
