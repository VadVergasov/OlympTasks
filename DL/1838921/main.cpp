#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    int i = 1;
    while (s.size() < n) {
        s += to_string(i);
        i++;
    }
    cout << s[n - 1];
    return 0;
}