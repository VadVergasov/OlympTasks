#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > tree;
vector<vector<int> > a;
int n, m, q;

void build_y(int vx, int lx, int rx, int vy, int ly, int ry) {
    if (ly == ry) {
        if (lx == rx) {
            tree[vx][vy] = a[lx][ly];
        } else {
            tree[vx][vy] = max(tree[(vx << 1)][vy], tree[(vx << 1) + 1][vy]);
        }
    } else {
        int my = (ly + ry) >> 1;
        build_y(vx, lx, rx, (vy << 1), ly, my);
        build_y(vx, lx, rx, (vy << 1) + 1, my + 1, ry);
        tree[vx][vy] = max(tree[vx][(vy << 1)], tree[vx][(vy << 1) + 1]);
    }
}

void build_x(int vx, int lx, int rx) {
    if (lx != rx) {
        int mx = (lx + rx) / 2;
        build_x((vx << 1), lx, mx);
        build_x((vx << 1) + 1, mx + 1, rx);
    }
    build_y(vx, lx, rx, 1, 0, m - 1);
}

int get_y(int vx, int vy, int tly, int try_, int ly, int ry) {
    if (ly > ry) {
        return -1000;
    }
    if (ly == tly && ry == try_) {
        return tree[vx][vy];
    }
    int tmy = (tly + try_) >> 1;
    return max(get_y(vx, (vy << 1), tly, tmy, ly, min(ry, tmy)),
               get_y(vx, (vy << 1) + 1, tmy + 1, try_, max(ly, tmy + 1), ry));
}

int get_x(int vx, int tlx, int trx, int lx, int rx, int ly, int ry) {
    if (lx > rx) {
        return -1000;
    }
    if (lx == tlx && rx == trx) {
        return get_y(vx, 1, 0, m - 1, ly, ry);
    }
    int tmx = (tlx + trx) >> 1;
    return max(
        get_x((vx << 1), tlx, tmx, lx, min(rx, tmx), ly, ry),
        get_x((vx << 1) + 1, tmx + 1, trx, max(tmx + 1, lx), rx, ly, ry));
}

void update_y(int vx, int lx, int rx, int vy, int ly, int ry, int x, int y,
              int val) {
    if (ly == ry) {
        if (rx == lx) {
            tree[vx][vy] = val;
        } else {
            tree[vx][vy] = max(tree[(vx << 1)][vy], tree[(vx << 1) + 1][vy]);
        }
    } else {
        int my = (ly + ry) >> 1;
        if (y <= my) {
            update_y(vx, lx, rx, (vy << 1), ly, my, x, y, val);
        } else {
            update_y(vx, lx, rx, (vy << 1) + 1, my + 1, ry, x, y, val);
        }
        tree[vx][vy] = max(tree[vx][(vy << 1)], tree[vx][(vy << 1) + 1]);
    }
}

void update_x(int vx, int lx, int rx, int x, int y, int val) {
    if (lx != rx) {
        int mx = (lx + rx) / 2;
        if (x <= mx) {
            update_x((vx << 1), lx, mx, x, y, val);
        } else {
            update_x((vx << 1) + 1, mx + 1, rx, x, y, val);
        }
    }
    update_y(vx, lx, rx, 1, 0, m - 1, x, y, val);
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    in >> n >> m >> q;
    a.resize(n, vector<int>(m));
    tree.resize((1 << (int)(ceil(log2(n)) + 1)),
                vector<int>((1 << (int)(ceil(log2(m)) + 1)), -1000));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            in >> a[i][j];
        }
    }
    build_x(1, 0, n - 1);
    for (int i = 1; i <= (ceil(log2(n)) + 1); i++) {
        for (int z = (1 << i - 1); z < (1 << i); z++) {
            for (int j = 1; j <= (ceil(log2(m)) + 1); j++) {
                for (int k = (1 << j - 1); k < (1 << j); k++) {
                    cout << tree[z][k] << " ";
                }
                cout << "\n";
            }
        }
        cout << "\n";
    }
    for (int i = 0; i < q; i++) {
        char t;
        in >> t;
        if (t == '?') {
            int x1, y1, x2, y2;
            in >> x1 >> y1 >> x2 >> y2;
            out << get_x(1, 0, n - 1, x1 - 1, y1 - 1, x2 - 1, y2 - 1) << "\n";
        } else {
            int x, y, val;
            in >> x >> y >> val;
            update_x(1, 0, n - 1, x - 1, y - 1, val);
        }
    }
    return 0;
}