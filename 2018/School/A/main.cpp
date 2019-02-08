#include <bits/stdc++.h>

using namespace std;

// Kirill ne hochet daavt' balli za kod na Python, a eshe dumaet, chto ia ne
// umeu na nem pisat'((( Kirill ne molodez, ne budte kak Kirill!

int main() {
    unsigned long long n;
    cin >> n;
    unsigned long long l = 0, r = n;
    while (l != r - 1) {
        unsigned long long pos = ceil((l + r) / 2.0), sum = 0;
        if (pos % 2 == 0) {
            sum = pos / 2 * (pos + 1);
        } else {
            sum = pos * ((pos + 1) / 2);
        }
        if (sum <= n) {
            l = (l + r) / 2;
        } else {
            r = (l + r) / 2;
        }
    }
    if (abs(n - l * (l + 1) / 2) < abs(n - r * (r + 1) / 2) ||
        n - r * (r + 1) / 2 < 0) {
        cout << l;
    } else {
        cout << r;
    }
    return 0;
}
