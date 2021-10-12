#include <iostream>
#include <vector>

using namespace std;

void get_diagonal(vector<vector<int> > &a, vector<int> &diag) {
    for (int i = 0; i < (int)min(a.size(), a[0].size()); i++) {
        if (a[i][i] % 2 == 0) {
            diag.push_back(a[i][i]);
        }
    }
}

long long multiply(vector<int> &diag) {
    long long res = 1;
    for (auto i : diag) {
        res *= i;
    }
    if (res == 1) {
        return 0;
    }
    return res;
}

int main() {
    int n, m;
    cout << "Enter the size of 2d array: ";
    while (!(cin >> n >> m) || n <= 0 || n > 1e6 || m <= 0 || m > 1e6) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter the size of 2d array: ";
    }
    vector<vector<int> > a(n, vector<int>(m));
    for (auto &i : a) {
        for (auto &j : i) {
            cout << "Enter the next element of the array: ";
            while (!(cin >> j)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter the next element of the array: ";
            }
        }
    }
    vector<int> diag;
    get_diagonal(a, diag);
    for (auto i : diag) {
        cout << i << " ";
    }
    cout << endl;
    cout << multiply(diag) << endl;
    return 0;
}
