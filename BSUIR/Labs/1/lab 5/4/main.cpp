#include <iostream>
#include <vector>

using namespace std;

int find_zeros(vector<vector<double> > &a) {
    int res = 0;
    for (int i = 0; i < (int)a.size(); i++) {
        for (int j = 0; j < (int)a[i].size(); j++) {
            if (a[i][j] == 0) {
                res++;
                cout << i << " " << j << endl;
            }
        }
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
    vector<vector<double> > a(n, vector<double>(m));
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
    cout << find_zeros(a) << endl;
    return 0;
}
