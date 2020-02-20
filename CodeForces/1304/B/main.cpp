#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<string, int> s;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        string t1 = t;
        reverse(t1.begin(), t1.end());
        if (s.find(t1) != s.end()) {
            s[t1]++;
        } else {
            s[t]++;
        }
    }
    int cnt = 0;
    for (auto &i : s) {
        string t1 = i.first;
        reverse(t1.begin(), t1.end());
        if (t1 == i.first && cnt == 0) {
            cnt++;
            continue;
        }
        if (i.second % 2 != 0) {
            i.second--;
        }
    }
    int res = 0;
    for (auto i : s) {
        res += i.second;
    }
    vector<string> r(res);
    int i1 = 0, i2 = res - 1;
    for (auto i : s) {
        if (i.second == 0) {
            continue;
        }
        string t2 = i.first;
        reverse(t2.begin(), t2.end());
        if (t2 == i.first) {
            r[res / 2] = t2;
            continue;
        }
        r[i1] = i.first;
        string t1 = i.first;
        reverse(t1.begin(), t1.end());
        r[i2] = t1;
        i2--;
        i1++;
    }
    cout << res * m << "\n";
    for (auto i : r) {
        cout << i;
    }
    return 0;
}