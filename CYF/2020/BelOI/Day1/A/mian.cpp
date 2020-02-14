#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    for (long long i = 1; i < 1LL << 20; i++) {
        if (ceil(sqrt(n + i * i)) == floor(sqrt(n + i * i))) {
            cout << "Yes\n" << (long long)sqrt(n + i * i) << " " << i;
            return 0;
        }
    }
    cout << "No";
    return 0;
}