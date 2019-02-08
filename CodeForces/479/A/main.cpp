#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    vector<int> d;
    cin >> a >> b >> c;
    d.push_back(a + b + c);
    d.push_back(a + b * c);
    d.push_back((a + b) * c);
    d.push_back(a * (b + c));
    d.push_back(a * b * c);
    sort(d.begin(), d.end());
    cout << d[d.size() - 1];
    return 0;
}
