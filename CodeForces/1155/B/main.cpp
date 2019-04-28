#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int eight = count(s.begin(), s.end(), '8');
    if (eight < n - 11 || s[n - 11] != '8') {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}