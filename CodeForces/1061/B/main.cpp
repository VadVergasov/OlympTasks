#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> nums;
    int n, m, tmp, mx = 0, counter = 0;
    long long res = 0;
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        nums[tmp]++;
        mx = max(mx, tmp);
        a.push_back(tmp);
    }
    if (n == 1) {
        cout << 0;
        return 0;
    }
    for (auto i = nums.rbegin(); i != nums.rend(); i++) {
        nums[i->first] += counter;
        counter += i->second;
    }
    for (auto const& i : nums) {
        res += (i.second - 1);
    }
    cout << res;
    return 0;
}
