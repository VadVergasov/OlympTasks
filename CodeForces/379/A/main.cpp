#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int res = 0;
    while (a) {
        res++;
        if (res % b == 0) {
            a++;
        }
        a--;
    }
    cout << res;
    return 0;
}
