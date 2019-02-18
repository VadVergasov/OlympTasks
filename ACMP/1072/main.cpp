#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, res = 0;
    in >> n;
    multiset<int> pos;
    set<int> nums;
    for (int i = 0; i < n - 1; i++) {
        int t1, t2;
        in >> t1 >> t2;
        pos.insert(t1);
        pos.insert(t2);
        nums.insert(t1);
        nums.insert(t2);
    }
    for (auto i : nums) {
        int c = pos.count(i);
        if (c > 1) {
            res++;
        }
        pos.erase(i);
        i++;
    }
    out << res;
    return 0;
}