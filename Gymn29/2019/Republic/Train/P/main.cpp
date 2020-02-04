#include <bits/stdc++.h>

#pragma GCC optimize("O3,no-stack-protector,unroll-loops")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    ifstream in("input.txt");
    ofstream out("output.txt");
    in.tie(0);
    int n, k;
    in >> n >> k;
    string s;
    in >> s;
    int res = 0;
    for (int i = 0; i <= n - k; i++) {
        int balance = 0;
        for (int j = 0; j < k; j++) {
            if (s[i + j] == '(') {
                balance++;
            } else if (s[i + j] == ')') {
                balance--;
            }
            if (balance < 0) {
                break;
            }
        }
        if (balance == 0) {
            res++;
            i++;
        }
    }
    out << res;
    return 0;
}