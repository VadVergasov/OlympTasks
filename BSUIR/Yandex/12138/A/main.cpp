#include <bits/stdc++.h>

using namespace std;

long long fact(int a) {
    if (a == 1 || a == 0) {
        return 1;
    }
    return fact(a - 1) * a;
}

vector<long long> a;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    a.resize(n);
    set<int> nums;
    for (int i = 0; i < n; i++) {
        nums.insert(i + 1);
    }
    long long cur = n, i = 0;
    while (k > 0) {
        long long f = 0;
        if (cur < 20) {
            f = fact(cur - 1);
        }
        if (f >= k || cur > 19 || cur == 1) {
            a[n - cur] = (*next(nums.begin(), i));
            nums.erase(a[n - cur]);
            i = 0;
            if (cur == 1) {
                break;
            }
            cur--;
        } else {
            k -= f;
            i++;
        }
    }
    cout << a[m - 1];
    return 0;
}