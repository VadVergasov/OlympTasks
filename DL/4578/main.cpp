#include <bits/stdc++.h>

using namespace std;

int dx[8] = {2, -2, 2, -2, 1, 1, -1, -1};
int dy[8] = {1, 1, -1, -1, 2, -2, 2, -2};

int main() {
    ofstream out("output.txt");
    ifstream in("input.txt");
    char t1, t2;
    int x1, x2, y1, y2;
    in >> t1 >> y1 >> t2 >> y2;
    x1 = t1 - 'A' + 1;
    x2 = t2 - 'A' + 1;
    queue<pair<pair<int, int>, int> > q;
    q.push(make_pair(make_pair(x1, y1), 0));
    while (q.front().first != make_pair(x2, y2)) {
        for (int i = 0; i < 8; i++) {
            if (q.front().first.first + dx[i] <= 0 ||
                q.front().first.second + dy[i] <= 0 ||
                q.front().first.first + dx[i] > 8 ||
                q.front().first.second + dy[i] > 8) {
                continue;
            }
            q.push(make_pair(make_pair(q.front().first.first + dx[i],
                                       q.front().first.second + dy[i]),
                             q.front().second + 1));
        }
        q.pop();
    }
    out << q.front().second;
    return 0;
}
