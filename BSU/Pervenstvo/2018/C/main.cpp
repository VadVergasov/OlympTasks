#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long sum = 0;
    char tmp;
    cin >> n;
    vector<long long> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp == '+') {
            long long s;
            cin >> s;
            sum += s;
            a.push_back(s);
        }
        if (tmp == '-') {
            sum -= a[0];
            a.erase(a.begin(), a.begin() + 1);
        }
        if (tmp == '?') {
            int res = 0;
            double arr = (double)((sum / (double)a.size()));
            for (int i = 0; i < a.size(); i++) {
                if (a[i] == arr) {
                    res++;
                }
            }
            cout << res << "\n";
        }
    }
    return 0;
}
