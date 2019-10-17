#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    deque<int> last;
    set<int> cur;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        bool f = true;
        if (cur.find(t) != cur.end()) {
            continue;
        }
        last.push_front(t);
        cur.insert(t);
        if (last.size() > k) {
            cur.erase(last.back());
            last.pop_back();
        }
    }
    cout << last.size() << "\n";
    for (auto i : last) {
        cout << i << " ";
    }
    return 0;
}