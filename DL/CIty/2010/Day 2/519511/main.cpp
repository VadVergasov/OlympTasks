#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    int n;
    in >> n;
    vector<int> b;
    while (n) {
        b.push_back(n % 2);
        n /= 2;
    }
    bool c = false;
    reverse(b.begin(), b.end());
    for (int i = 0; i < b.size() - 1; i++) {
        if (b[i] == 1 && b[i + 1] == 0) {
            c = true;
            swap(b[i], b[i + 1]);
            break;
        }
    }
    reverse(b.begin(), b.end());
    if (!c) {
        for (int i = b.size() - 1; i >= 0; i++) {
            if (b[i] == 1) {
                b[i] = 0;
                break;
            }
        }
        b.push_back(1);
    }
    int res = 0;
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == 0 && i == b.size() - 1) {
            break;
        }
        res *= 2;
        res += b[i];
    }
    out << res;
    return 0;
}
