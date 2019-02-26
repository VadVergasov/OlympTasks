#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, res = 100000000, j = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    deque<int> window;
    for (int i = 0; i < n; i++) {
        window.push_back(a[i]);
        sum += a[i];
        if (window.size() > k) {
            sum -= window.front();
            window.pop_front();
        }
        if (window.size() == k) {
            if (res == sum) {
                continue;
            }
            res = min(res, sum);
            if (res == sum) {
                j = i - k;
            }
        }
    }
    cout << j + 2;
    return 0;
}