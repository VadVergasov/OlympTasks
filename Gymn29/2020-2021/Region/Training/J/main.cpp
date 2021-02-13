#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, pair<int, long long>> a, pair<int, pair<int, long long>> b) {
    if (a.second.second == b.second.second) {
        return a.second.first < b.second.first;
    }
    return a.second.second > b.second.second;
}

int main() {
    ios_base::sync_with_stdio(0);
    ifstream in("input.txt");
    ofstream out("output.txt");
    in.tie(0);
    out.tie(0);
    int n, num = 0;
    in >> n;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) {
        in >> p[i];
        num += p[i];
    }
    for (int i = 0; i < n; i++) {
        in >> q[i];
    }
    vector<pair<int, pair<int, long long>>> all;
    vector<pair<int, long long>> r;
    for (int i = 0; i < num; i++) {
        int id, group;
        double a, b, c, d;
        in >> id >> group >> a >> b >> c >> d;
        a *= 100;
        b *= 100;
        c *= 100;
        d *= 100;
        if (a == 0 && b == 0 && c == 0 && d == 0) {
            continue;
        }
        cout << a << " " << b << " " << c << " " << d << endl;
        int sum = a + b + c + d;
        all.push_back(make_pair(group, make_pair(id, sum)));
    }
    sort(all.begin(), all.end(), cmp);
    vector<int> last(n, -1);
    int i = 0;
    while (i <= all.size() - 1) {
        if (last[all[i].first - 1] == all[i].second.second &&
            q[all[i].first - 1] == 0) {
            q[all[i].first - 1]++;
        }
        if (q[all[i].first - 1] < 1) {
            i++;
            continue;
        }
        r.push_back(make_pair(all[i].second.first, all[i].second.second));
        last[all[i].first - 1] = all[i].second.second;
        q[all[i].first - 1]--;
        i++;
    }
    out << r.size() << "\n";
    for (auto i : r) {
        out << i.first << " " << fixed << setprecision(2)
            << (double)i.second / 100.0 << "\n";
    }
    return 0;
}