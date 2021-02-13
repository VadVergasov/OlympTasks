#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("exam.in");
    ofstream cout("exam.out");
    int n;
    cin >> n;
    set<int> free;
    for (int i = 1; i <= 1e6; i++) {
        free.insert(i);
    }
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > 0) {
            auto res = free.upper_bound(a - 1);
            while (*res < a) {
                res++;
            }
            free.erase(res);
            cout << *res << "\n";
        } else {
            free.insert(-a);
        }
    }
    return 0;
}
