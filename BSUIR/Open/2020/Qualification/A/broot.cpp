#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int i = 1; i < 1000; i++) {
        bool res = false;
        for (int j = 2; j < i && !res; j++) {
            for (int k = 2; k < i && !res; k++) {
                if ((j | k) == i) {
                    res = true;
                }
            }
        }
        if (!res) {
            cout << i << "\n";
        }
    }
}