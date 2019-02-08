#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    if (atoi(n.c_str()) >= 0) {
        cout << n;
        return 0;
    }
    if (n.back() > n[n.size() - 2]) {
        string res = "";
        for (int i = 0; i < n.size() - 1; i++) {
            res += n[i];
        }
        cout << atoi(res.c_str());
        return 0;
    }
    string res = "";
    for (int i = 0; i < n.size() - 2; i++) {
        res += n[i];
    }
    res += n.back();
    cout << atoi(res.c_str());
    return 0;
}
