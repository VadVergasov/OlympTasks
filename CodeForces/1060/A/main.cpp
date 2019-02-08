#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, eight = 0;
    char tmp;
    cin >> n;
    vector<char> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp == '8') {
            eight++;
        }
        a.push_back(tmp);
    }
    if (n < 11 || eight == 0) {
        cout << 0;
        return 0;
    } else {
        cout << min((double)eight, floor(n / 11.0));
    }
    return 0;
}
