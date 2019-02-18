#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    unsigned long long nums[8] = {
        6,        28,         496,          8128,
        33550336, 8589869056, 137438691328, 2305843008139952128};
    unsigned long long n, m;
    in >> n >> m;
    int res = 0;
    for (int i = 0; i < 8; i++) {
        if (nums[i] >= n && nums[i] <= m) {
            res++;
            out << nums[i] << "\n";
        }
    }
    if (res == 0) {
        out << "Absent";
    }
    return 0;
}