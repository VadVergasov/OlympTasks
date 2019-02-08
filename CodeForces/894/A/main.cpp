#include <bits/stdc++.h>

using namespace std;

int main() {
    long long res = 0;
    string in;
    cin >> in;
    for (int i = 0; i < in.size(); i++) {
        for (int j = i + 1; j < in.size(); j++) {
            for (int n = j + 1; n < in.size(); n++) {
                if (in[i] == 'Q' && in[j] == 'A' && in[n] == 'Q') {
                    res++;
                }
            }
        }
    }
    cout << res;
    return 0;
}
