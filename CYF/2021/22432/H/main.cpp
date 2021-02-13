#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b) {
    if (a.size() < b.size()) {
        return true;
    } else if (a.size() > b.size()) {
        return false;
    }
    return a < b;
}

int main() {
    string x, y;
    cin >> x >> y;
    if (x == y) {
        cout << x;
        return 0;
    }
    vector<string> a;
    for (int i = 0; i < x.size(); i++) {
        int j = 0;
        while (x[i + j] == y[j] && j < y.size() && j + i < x.size()) {
            j++;
        }
        if (j < y.size() && j + i < x.size()) {
            j--;
        }
        a.push_back(x + y.substr(max(0, j), y.size() - max(0, j)));
    }
    for (int i = 0; i < y.size(); i++) {
        int j = 0;
        while (y[i + j] == x[j] && j < x.size() && j + i < y.size()) {
            j++;
        }
        if (j < x.size() && j + i < y.size()) {
            j--;
        }
        a.push_back(y + x.substr(max(0, j), x.size() - max(0, j)));
    }
    sort(a.begin(), a.end(), cmp);
    cout << a[0];
    return 0;
}
