#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> m;
    deque<int> a;
    for (int i = 0; i < n; i++) {
        int t;
        in >> t;
        a.push_back(t);
    }
    for (int i = 0; i < m; i++) {
        int t;
        in >> t;
        a.push_front(t);
        if (a[0] == a[1]) {
            a.pop_front();
            a.pop_front();
        }
    }
    out << a.size();
    return 0;
}