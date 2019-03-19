#include <bits/stdc++.h>

using namespace std;

struct cmp {
    bool operator()(pair<long long, long long> a,
                    pair<long long, long long> b) {
        return a.second > b.second;
    }
};

int main() {
    ifstream in("castle.in");
    ofstream out("castle.out");
    long long all = 0;
    long long n, s;
    in >> n >> s;
    set<pair<long long, long long>, cmp> a;
    for (long long i = 0; i < n; i++) {
        long long t1, t2;
        in >> t1 >> t2;
        all += t1;
        a.insert(make_pair(t1, t2));
    }
    for (auto i : a) {
        cout << i.first << " " << i.second << "\n";
    }
    while (s > 0) {
    }
    return 0;
}