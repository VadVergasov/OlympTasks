#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    map<int, int> nums;
    for (int i = 0; i < n; i++) {
        int t, cnt = 0;
        in >> t;
        while (t) {
            if (t % 2 == 1) {
                cnt++;
            }
            t /= 2;
        }
        nums[cnt]++;
    }
    int mx = 0;
    for (auto i : nums) {
        mx = max(mx, i.second);
    }
    out << mx;
    return 0;
}