#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, m;
    in >> n >> n;
    vector<pair<pair<long long, long long>, long long> > a(n);
    for (int i = 0; i < n; i++) {
        long long t1, t2, t3;
        in >> t1 >> t2 >> t3;
        a[i] = make_pair(make_pair(t1, t2), t3);
    }
    double x, y, z, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i].first.first;
    }
    sum /= n;
    x = round(sum);
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i].first.second;
    }
    sum /= n;
    y = round(sum);
    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i].second;
    }
    sum /= n;
    z = round(sum);
    out << x << " " << y << " " << z;
    return 0;
}