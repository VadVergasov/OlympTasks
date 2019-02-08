#include <bits/stdc++.h>

using namespace std;

long long a[100001];

int main() {
    int n, tmp, sum = 0, previus;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[tmp]++;
    }
    for (int i = 2; i < 100001; i++) {
        a[i] = max(a[i - 1], a[i - 2] + a[i] * i);
    }
    cout << a[100000];
    return 0;
}
