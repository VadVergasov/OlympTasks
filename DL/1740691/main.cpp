#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, k, tmp, t1, t2;
    in >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        in >> tmp;
        a.push_back(tmp);
    }
    a.push_back(0);
    for (int i = 0; i < k; i++) {
        in >> t1 >> t2;
        int res = 0;
        int c = 1;
        for (int j = t1 - 1; j < t2; j++) {
            if (a[j] < a[j + 1]) {
                c++;
            } else {
                res = max(res, c);
                c = 1;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
