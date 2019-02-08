#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> l(k);
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        l[s[i] - 'a']++;
    }
    for (int i = 0; i < k; i++) {
        if (l[i] == 0) {
            cout << 0;
            return 0;
        }
    }
    return 0;
}
