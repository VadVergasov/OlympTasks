#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long t, tmp;
    cin >> n >> t;
    vector<long long> a;
    cin >> tmp;
    a.push_back(tmp);
    for (int i = 1; i < n; i++) {
        cin >> tmp;
        a.push_back(a[i - 1] + tmp);
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            // cout<<a[i]<<" "<<a[j]<<" ";
            if (i == j) {
                if (a[i] < t) {
                    // cout<<(a[i]<t)<<"\n";
                    res++;
                }
                continue;
            }
            // cout<<(a[i]-a[j]<t)<<"\n";
            if (a[i] - a[j] < t) {
                res++;
                break;
            }
        }
    }
    cout << res;
    return 0;
}
