#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> poses, added;
    int cnt = 0;
    vector<int> res(n), order;
    order.reserve(n);
    for (int i = 0; i < 2 * n; i++) {
        char t;
        cin >> t;
        if (t == '-') {
            int x;
            cin >> x;
            order.push_back(x);
            if (poses.size() == 0) {
                cout << "NO";
                return 0;
            }
            res[*(--poses.end())] = x;
            added.insert(x);
            poses.erase((--poses.end()));
        } else {
            order.push_back(-1);
            poses.insert(cnt);
            cnt++;
        }
    }
    set<int> cur;
    int next = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (order[i] == -1) {
            cur.insert(res[next]);
            next++;
        } else {
            if (*cur.begin() != order[i]) {
                cout << "NO";
                return 0;
            }
            cur.erase(order[i]);
        }
    }
    cout << "YES\n";
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}
