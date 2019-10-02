#include <algorithm>
#include <cmath>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    vector<int> b;
    vector<pair<int, int> > a;
    in >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        int t;
        in >> t;
        a[i] = make_pair(t, i);
    }
    in >> m;
    b.resize(m);
    if (m == 0) {
        return 0;
    }
    if (n == 0) {
        for (int i = 0; i < m; i++) {
            out << -1 << " ";
        }
        return 0;
    }
    for (int i = 0; i < m; i++) {
        in >> b[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < m; i++) {
        int seek = b[i];
        int res = lower_bound(a.begin(), a.end(), make_pair(seek, 1000000)) -
                  a.begin() - 1;
        if (a[res].first == seek) {
            out << a[res].second + 1 << " ";
        } else {
            out << -1 << " ";
        }
    }
    return 0;
}
