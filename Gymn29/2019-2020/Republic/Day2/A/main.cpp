#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, s;
    cin >> n >> k >> s;
    string field, copy;
    cin >> field;
    copy = field;
    s--;
    int cnt = 0, last = s, left = 0, right = n - 1, res = 1;
    for (int i = s; i >= 0; i--) {
        if (cnt > k && copy[i] == '#') {
            left = i + 1;
            break;
        }
        if (copy[i] == '#') {
            last = i;
        }
        copy[i] = '.';
        cnt++;
    }
    bool f = true;
    for (int i = s; i >= 0; i--) {
        if (copy[i] == '#') {
            f = false;
        }
    }
    if (copy.front() == '.' && f) {
        left = 0;
    }
    int addition = (k - s + last) / 2;
    for (int i = left; i < n; i++) {
        if (copy[i] == '#') {
            addition--;
            if (addition == -1) {
                break;
            }
        }
        res = max(res, i - left + 1);
    }
    copy = field;
    cnt = 0;
    last = s;
    for (int i = s; i < n; i++) {
        if (cnt > k && copy[i] == '#') {
            right = i - 1;
            break;
        }
        if (copy[i] == '#') {
            last = i;
        }
        copy[i] = '.';
        cnt++;
    }
    f = true;
    for (int i = s; i < n; i++) {
        if (copy[i] == '#') {
            f = false;
        }
    }
    if (copy.back() == '.' && f) {
        right = n - 1;
    }
    addition = (k - last + s) / 2;
    for (int i = right; i >= 0; i--) {
        if (copy[i] == '#') {
            addition--;
            if (addition == -1) {
                break;
            }
        }
        res = max(res, right - i + 1);
    }
    cout << res;
    return 0;
}