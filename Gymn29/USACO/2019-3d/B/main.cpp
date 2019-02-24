#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > a(1001, vector<int>(1001, 0));

int main() {
    ios_base::sync_with_stdio(0);
    ifstream in("paintbarn.in");
    ofstream out("paintbarn.out");
    in.tie(0);
    out.tie(0);
    int n, k, ymx = 0, xmx = 0, xmn = 1000, ymn = 1000;
    in >> n >> k;
    for (int i = 0; i < n; i++) {
        int x1, x2, y1, y2;
        in >> x1 >> y1 >> x2 >> y2;
        xmx = max(xmx, x2);
        ymx = max(ymx, y2);
        xmn = min(xmn, x1);
        ymn = min(ymn, y1);
        for (int j = x1; j < x2; j++) {
            for (int k = y1; k < y2; k++) {
                a[j][k]++;
            }
        }
    }
    int res = 0;
    for (int i = xmn; i <= xmx; i++) {
        for (int j = ymn; j < ymx; j++) {
            if (a[i][j] == k) {
                res++;
            }
        }
    }
    out << res;
    return 0;
}