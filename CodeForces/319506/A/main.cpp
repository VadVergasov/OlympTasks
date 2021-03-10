#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    long long res = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        for (int j = i + 1; j < (int)s.size(); j++) {
            if (s[i] > s[j]) {
                res++;
            }
        }
    }
    cout << res;
    return 0;
}
