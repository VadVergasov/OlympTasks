#include <bits/stdc++.h>

using namespace std;

struct gy {
    string s;
    int a, b;
};

int n;
vector<gy> v;
bool check(int a) {
    int mn = a, mx = a;
    for (int i = 0; i < n; i++) {
        if (v[i].s == "none") {
            if (mn > v[i].b || mx < v[i].a) {
                return false;
            }
            mx = min(v[i].b, mx);
            mn = max(v[i].a, mn);
        } else if (v[i].s == "on") {
            mn += v[i].a;
            mx += v[i].b;
        } else {
            mn -= v[i].b;
            mx -= v[i].a;
        }
        mn = max(0, mn);
        mx = max(0, mx);
    }
    // cout << "\n";
    return true;
}

int main() {
    ifstream in("traffic.in");
    ofstream out("traffic.out");
    in >> n;
    string s;
    int a, b;
    long long mxp = 0, mxm = 0, mnp = 0, mnm = 0, tempmn = 0, tempmx = 1e9;
    int mnpos = -1, mxpos = -1;
    for (int i = 0; i < n; i++) {
        in >> s >> a >> b;
        v.push_back({s, a, b});
    }
    int ans1, ans2;
    for (int i = 0; i < 1001; i++) {
        if (check(i)) {
            out << i << " ";
            ans1 = i;
            break;
        }
    }
    for (int i = 1001; i >= 0; i--) {
        if (check(i)) {
            out << i << "\n";
            ans2 = i;
            break;
        }
    }
    int mn = ans1;
    int mx = ans2;
    for (int i = 0; i < n; i++) {
        if (v[i].s == "none") {
            mn = max(v[i].a, mn);
            mx = min(mx, v[i].b);
            continue;
        }
        if (v[i].s == "on") {
            mn += v[i].a;
            mx += v[i].b;
        } else {
            mn -= v[i].b;
            mx -= v[i].a;
        }
        mx = max(mx, 0);
        mn = max(0, mn);
    }
    out << mn << " " << mx;
    return 0;
}