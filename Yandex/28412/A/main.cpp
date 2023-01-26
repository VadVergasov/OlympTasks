#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& i : a) {
        cin >> i;
    }
    for (size_t i = 0; i < a.size() - 1; i++) {
        if (a[i] > a[i + 1]) {
            cout << -1;
            return 0;
        }
    }
    cout << a.back() - a.front();
    return 0;
}