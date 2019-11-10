#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    long long sum = 0;
    char tmp;
    long long s;
    double arr;
    cin >> n;
    vector<long long> a;
    map<long long, int> cars;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp == '+') {
            cin >> s;
            sum += s;
            a.push_back(s);
            cars[s]++;
        }
        if (tmp == '-') {
            sum -= a[0];
            cars[a[0]]--;
            a.erase(a.begin(), a.begin() + 1);
        }
        if (tmp == '?') {
            arr = (double)((sum / (double)a.size()));
            if (arr != (long long)arr) {
                cout << 0 << "\n";
                continue;
            }
            cout << cars[arr] << "\n";
        }
    }
    return 0;
}