#include <bits/stdc++.h>

using namespace std;

int main() {
    string b[6] = {"purple", "green", "blue", "orange", "red", "yellow"};
    string c[6] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
    int n;
    cin >> n;
    vector<string> a;
    string tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    cout << 6 - n << "\n";
    vector<int> no;
    for (int i = 0; i < 6; i++) {
        bool o = true;
        for (int j = 0; j < n; j++) {
            if (a[j] == b[i]) {
                o = false;
                break;
            }
        }
        if (o) {
            no.push_back(i);
        }
    }
    for (int i = 0; i < no.size(); i++) {
        cout << c[no[i]] << "\n";
    }
    return 0;
}
