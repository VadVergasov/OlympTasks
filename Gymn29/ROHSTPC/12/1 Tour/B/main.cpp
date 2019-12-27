#include <bits/stdc++.h>

using namespace std;

vector<int> dx = {1, 1, -1, -1}, dy = {1, -1, 1, -1};

int main() {
    ifstream in("cheval.in");
    ofstream out("cheval.out");
    int x1, y1, x2, y2;
    char c, d;
    in >> c >> y1 >> d >> y2;
    y1--;
    y2--;
    x1 = c - 'a';
    x2 = d - 'a';
    queue<pair<pair<pair<int, int>, pair<int, int> >, int> > q;
    q.push(make_pair(make_pair(make_pair(x1, y1), make_pair(1, 0)), 0));
    while (!q.empty()) {
        int x = q.front().first.first.first, y = q.front().first.first.second,
            a = q.front().first.second.first, b = q.front().first.second.second,
            l = q.front().second;
        if (a > 8 && b > 8) {
            out << -1;
            return 0;
        }
        if (x == x2 && y == y2) {
            out << l;
            return 0;
        }
        q.pop();
        for (int i = 0; i < 4; i++) {
            if (x + dx[i] * a >= 0 && x + dx[i] * a < 8 && y + dy[i] * b >= 0 &&
                y + dy[i] * b < 8) {
                if (a != b) {
                    q.push(make_pair(
                        make_pair(make_pair(x + dx[i] * a, y + dy[i] * b),
                                  make_pair(a, b + 1)),
                        l + 1));
                } else {
                    q.push(make_pair(
                        make_pair(make_pair(x + dx[i] * a, y + dy[i] * b),
                                  make_pair(a + 1, b)),
                        l + 1));
                }
            }
        }
        for (int i = 0; i < 4; i++) {
            if (x + dx[i] * b >= 0 && x + dx[i] * b < 8 && y + dy[i] * a >= 0 &&
                y + dy[i] * a < 8) {
                if (a != b) {
                    q.push(make_pair(
                        make_pair(make_pair(x + dx[i] * b, y + dy[i] * a),
                                  make_pair(a, b + 1)),
                        l + 1));
                } else {
                    q.push(make_pair(
                        make_pair(make_pair(x + dx[i] * b, y + dy[i] * a),
                                  make_pair(a + 1, b)),
                        l + 1));
                }
            }
        }
    }
    return 0;
}