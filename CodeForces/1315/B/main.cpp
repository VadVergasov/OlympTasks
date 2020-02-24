// https://codeforces.com/contest/1315/problem/B
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int a, b, p;
        cin >> a >> b >> p;
        string s;
        cin >> s;
        vector<pair<int, int>> sum;
        sum.push_back({0, 1});
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == 'A') {
                while (s[i] == 'A' && i < s.size() - 1) {
                    i++;
                }
                sum.push_back({sum.back().first + a, i + 1});
                i--;

            } else {
                while (s[i] == 'B' && i < s.size() - 1) {
                    i++;
                }
                sum.push_back({sum.back().first + b, i + 1});
                i--;
            }
        }
        // for (auto i : sum) {
        //     cout << i.first << " " << i.second << "\n";
        // }
        for (int i = 0; i < sum.size(); i++) {
            if (sum.back().first - sum[i].first <= p) {
                cout << sum[i].second << "\n";
                break;
            }
        }
    }
    return 0;
}