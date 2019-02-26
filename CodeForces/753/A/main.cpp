#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> a;
    int sum = 0, cur = 1, res = 0;
    while (sum != n) {
        sum += cur;
        if (sum > n) {
            sum -= (cur - 1);
            a.erase(cur - 1);
        }
        a.insert(cur);
        cur++;
    }
    cout << a.size() << "\n";
    for (auto i : a) {
        cout << i << " ";
    }
    return 0;
}