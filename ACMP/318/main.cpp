#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n;
    in >> n;
    deque<int> bin;
    while (n) {
        bin.push_front(n % 2);
        n /= 2;
    }
    bin.push_front(0);
    next_permutation(bin.begin(), bin.end());
    long long res = 0;
    for (int i = 0; i < bin.size(); i++) {
        res += bin[i] * ((long long)1 << (bin.size() - i - 1));
    }
    out << res;
    return 0;
}