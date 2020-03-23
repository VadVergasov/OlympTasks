#include <bits/stdc++.h>

using namespace std;

unsigned int nextRand17(unsigned int a, unsigned int b) {
    unsigned int cur = 0;
    cur = cur * a + b;
    return cur >> 15;
}

unsigned int nextRand24(unsigned int a, unsigned int b) {
    unsigned int cur = 0;
    cur = cur * a + b;
    return cur >> 8;
}

void init(unsigned int a, unsigned int b, vector<int> &f) {
    unsigned int a, b;
    for (int i = 0; i < 1 << 17; i++) {
        f[i] = nextRand24(a, b);
    }
}

int main() {
    unsigned int q, a, b;
    cin >> q >> a >> b;
    vector<int> f(1 << 17);
    init(a, b, f);
    for (int i = 0; i < q; i++) {
        int l = nextRand17(a, b);
        int r = nextRand17(a, b);
        if (l > r) {
            swap(l, r);
        }
        int x = nextRand24(a, b);
        int y = nextRand24(a, b);
        if (x > y) {
            swap(x, y);
        }
    }
    return 0;
}