#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> nums;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        nums[t]++;
    }
    int a, gcd, b;
    a = nums.rbegin()->first;
    for (auto i : nums) {
        if (a % i.first == 0) {
            nums[i.first]--;
        }
    }
    for (auto i = nums.rbegin(); i != nums.rend(); i++) {
        if (i->second > 0) {
            b = i->first;
            break;
        }
    }
    cout << a << " " << b;
    return 0;
}
