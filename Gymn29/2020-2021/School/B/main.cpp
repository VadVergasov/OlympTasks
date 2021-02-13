#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, n1;
    cin >> n;
    n1 = n;
    int sum = 0;
    set<int> nums;
    bool f = true;
    while (n1) {
        if (nums.find(n1 % 10) != nums.end()) {
            f = false;
        }
        nums.insert(n1 % 10);
        sum += n1 % 10;
        n1 /= 10;
    }
    if (n < 100 || n > 100000) {
        cout << "FALSE";
    } else if (f || sum == 13) {
        cout << "ENTER";
    } else {
        cout << "LOCK";
    }
    return 0;
}