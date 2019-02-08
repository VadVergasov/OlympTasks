#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, tmp;
    cin >> n;
    multiset<int> a;
    set<int> b;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.insert(tmp);
    }
    auto i = a.end();
    i--;
    int res = (*i);
    while ((*i) != 1) {
        int d = -1;
        for (int j = 2; j < ceil(sqrt((*i))); j++) {
            if ((*i) % j == 0) {
                d = j;
                break;
            }
        }
        int cur = (*i);
        if (d == -1) {
            d = cur;
        }
        auto c = a.find(cur);
        a.erase(c);
        if (!(b.find(d) != b.end()) && (a.find(d) != a.end())) {
            c = a.find(d);
            a.erase(c);
        } else if (a.find(d * d) != a.end()) {
            c = a.find(d * d);
            a.erase(c);
            b.insert(d * d);
        }
        /*for(auto j:a){
            cout<<j<<" ";
        }
        cout<<"\n";
        cout<<cur<<" "<<d<<"\n";*/
        b.insert(d);
        i = a.find(cur / d);
    }
    cout << res << " " << (*(--a.end()));
    return 0;
}
