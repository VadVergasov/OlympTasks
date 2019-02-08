#include <bits/stdc++.h>

using namespace std;

int main() {
    string l[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    int n;
    cin >> n;
    while (n > 5) {
        n /= 2;
        n -= 2;
    }
    cout << l[n - 1];
    return 0;
}
