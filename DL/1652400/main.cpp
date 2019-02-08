#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) { return a.second < b.second; }

bool comp(pair<int, int> a, pair<int, int> b) { return a.first < b.first; }

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, s, tmp, res = 0;
    in >> n >> s;
    vector<pair<int, int> > a;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        sum += tmp;
        a.push_back(make_pair(i, tmp));
    }
    sort(a.begin(), a.end(), cmp);
    int u = ceil(sum / double(n));
    for (int i = 0; i < n; i++) {
        if (a[i].second + s < u) {
            res++;
            a[i].second += s;
            sum -= a[i].second - s;
            u = ceil(sum / double(n - res));
        } else {
            a[i].second = u;
        }
    }
    sort(a.begin(), a.end(), comp);
    for (int i = 0; i < n; i++) {
        out << a[i].second << " ";
    }
    return 0;
}
