#include <bits/stdc++.h>

using namespace std;

int binpow(int n, int p) {
    int res = 1;
    while (p) {
        if (p & 1) {
            res *= n;
        }
        n *= n;
        p >>= 1;
    }
    return res;
}

int main() {
    int n, n1;
    cin >> n;
    n1 = n;
    vector<short> nums;
    while (n) {
        nums.push_back(n % 10);
        n /= 10;
    }
    reverse(nums.begin(), nums.end());
    next_permutation(nums.begin(), nums.end());
    n = 0;
    for (int i = 0; i < nums.size(); i++) {
        int t = binpow(10, (int)nums.size() - i - 1);
        n += nums[i] * t;
    }
    if (n <= n1) {
        cout << -1;
    } else {
        cout << n;
    }
    return 0;
}