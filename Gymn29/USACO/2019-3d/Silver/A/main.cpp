#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("herding.in");
    ofstream out("herding.out");
    int n;
    in >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    int mn = 1e9;
    sort(a.begin(), a.end());
    for (auto i : a) {
        auto j = upper_bound(a.begin(), a.end(), n + i - 2);
        if (j == a.end()) {
            continue;
        }
        mn = min(mn, abs(i - *j) - 1 + (abs(i - *j) - 1 != n - 2));
        /*cout << i << " " << (*j) << " "
             << abs(i - *j) - 1 + (abs(i - *j) - 1 != n - 2) << "\n";*/
    }
    out << mn << "\n";
    deque<int> otr;
    long long sum = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] - 1 < 1) {
            continue;
        }
        otr.push_back(a[i + 1] - a[i] - 1);
        sum += otr.back();
    }
    int res = sum - min(otr.back(), otr.front());
    out << res;
    return 0;
}