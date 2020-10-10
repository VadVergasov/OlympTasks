#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, d;
    in >> n >> d;
    vector<int> a(n);
    for (auto &i : a) {
        in >> i;
    }
    sort(a.begin(), a.end());
    int res = 0, num = a.front() / d, another = a.front() % d;
    for (int i = 0; i < n; i++) {
        if (i == 0 && a[0] == d) {
            continue;
        }
        if (i != 0) {
            num += (a[i] - a[i - 1]) / d;
            another += (a[i] - a[i - 1]) % d;
            if (another > d) {
                another -= d;
                num++;
            }
        }
        if (num > 0) {
            num--;
            res++;
        }
    }
    cout << res;
    return 0;
}