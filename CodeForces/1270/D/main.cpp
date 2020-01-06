#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, mx = 0;
    multiset<int> nums;
    cin >> n >> k;
    for (int i = 0; i < k + 1; i++) {
        cout << "? ";
        for (int j = 0; j < k + 1; j++) {
            if (i == j) {
                continue;
            }
            cout << j + 1 << " ";
        }
        cout << endl;
        flush(cout);
        int a, b;
        cin >> a >> b;
        mx = max(mx, b);
        nums.insert(b);
    }
    cout << "! " << nums.count(mx) << endl;
    flush(cout);
    return 0;
}