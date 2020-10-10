#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int number = 0, mn = 0, start;
    for (auto i : s) {
        if (i == '-') {
            number--;
        } else {
            number++;
        }
        mn = min(mn, number);
    }
    start = -mn;
    for (auto i : s) {
        if (i == '-') {
            start--;
        } else {
            start++;
        }
    }
    cout << start;
    return 0;
}