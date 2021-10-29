#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 2210 || n == 2201 || n == 2120 || n == 2102 || n == 2012 ||
        n == 2021 || n == 1220 || n == 1202 || n == 1022) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}