#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    deque<int> a(n);
    for (int i = 0; i < n; i++) {
        in >> a[i];
    }
    int i = 0;
    while (a.size() > 1) {
        if (i % 2 == 0) {
            if (a.front() > a.back()) {
                a.pop_back();
            } else {
                a.pop_front();
            }
        } else {
            if (a.front() < a.back()) {
                a.pop_back();
            } else {
                a.pop_front();
            }
        }
        for (auto i : a) {
            cout << i << " ";
        }
        cout << endl;
        i++;
    }
    cout << a.front();
    return 0;
}