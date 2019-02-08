#include <bits/stdc++.h>

using namespace std;

short int dir[24][4][2] = {
    {{1, 0}, {0, 1}, {-1, 0}, {0, -1}}, {{1, 0}, {0, 1}, {0, -1}, {-1, 0}},
    {{1, 0}, {0, -1}, {-1, 0}, {0, 1}}, {{1, 0}, {0, -1}, {0, 1}, {-1, 0}},
    {{1, 0}, {-1, 0}, {0, -1}, {0, 1}}, {{1, 0}, {-1, 0}, {0, 1}, {0, -1}},
    {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}, {{-1, 0}, {1, 0}, {0, 1}, {0, -1}},
    {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}, {{-1, 0}, {0, 1}, {0, -1}, {1, 0}},
    {{-1, 0}, {0, -1}, {1, 0}, {0, 1}}, {{-1, 0}, {0, -1}, {0, 1}, {1, 0}},
    {{0, 1}, {1, 0}, {-1, 0}, {0, -1}}, {{0, 1}, {1, 0}, {0, -1}, {-1, 0}},
    {{0, 1}, {-1, 0}, {1, 0}, {0, -1}}, {{0, 1}, {-1, 0}, {0, -1}, {1, 0}},
    {{0, 1}, {0, -1}, {1, 0}, {-1, 0}}, {{0, 1}, {0, -1}, {-1, 0}, {1, 0}},
    {{0, -1}, {1, 0}, {-1, 0}, {0, 1}}, {{0, -1}, {1, 0}, {0, 1}, {-1, 0}},
    {{0, -1}, {-1, 0}, {1, 0}, {0, 1}}, {{0, -1}, {-1, 0}, {0, 1}, {1, 0}},
    {{0, -1}, {0, 1}, {1, 0}, {-1, 0}}, {{0, -1}, {0, 1}, {-1, 0}, {1, 0}}};

int main() {
    long long res = 0;
    string str;
    pair<short int, short int> s, e, now;
    char tmp;
    short int n, m;
    cin >> n >> m;
    vector<vector<char> > lab;
    lab.resize(n, {});
    for (short int i = 0; i < n; i++) {
        for (short int j = 0; j < m; j++) {
            cin >> tmp;
            lab[i].push_back(tmp);
            if (tmp == 'S') {
                s.first = i;
                s.second = j;
                now.first = i;
                now.second = j;
            } else if (tmp == 'E') {
                e.first = i;
                e.second = j;
            }
        }
    }
    cin >> str;
    for (short int i = 0; i < 24; i++) {
        for (short int j = 0; j < str.size(); j++) {
            now.first += dir[i][str[j] - '0'][0];
            now.second += dir[i][str[j] - '0'][1];
            if (now.first == e.first && now.second == e.second) {
                res++;
                break;
            }
            if (now.first < 0 || now.second < 0 || now.first >= n ||
                now.second >= m) {
                break;
            } else if (lab[now.first][now.second] != '#' ||
                       lab[now.first][now.second] == 'S') {
                continue;
            } else {
                break;
            }
        }
        now.first = s.first;
        now.second = s.second;
    }
    cout << res;
    return 0;
}
