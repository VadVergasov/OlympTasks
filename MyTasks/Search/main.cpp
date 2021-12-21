// Main code for this task.
// Copyright (C) 2021  Vadim Vergasov aka VadVergasov
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int search(int l, int r, int val, long long* array) {
    if (l == r) {
        return l;
    }
    int m = (l + r) >> 1;
    if (array[m] == val) {
        return m;
    } else if (array[m] < val) {
        return search(m + 1, r, val, array);
    } else {
        return search(l, m, val, array);
    }
}

int mem_search(int l, int r, int val, int sz, long long* array) {
    long long* arr = new long long[sz];
    for (int i = 0; i < sz; i++) {
        arr[i] = array[i];
    }
    if (l == r) {
        delete[] arr;
        return l;
    }
    int m = (l + r) >> 1;
    int answer;
    if (arr[m] == val) {
        answer = m;
    } else if (array[m] < val) {
        answer = mem_search(m + 1, r, val, sz, arr);
    } else {
        answer = mem_search(l, m, val, sz, arr);
    }
    delete[] arr;
    return answer;
}

int main() {
    int n;
    cin >> n;
    long long* array = new long long[n];
    array[0] = 0;
    for (int i = 1; i < n; i++) {
        array[i] = rand() % 1000000 + array[i - 1];
    }
    int to_search = (rand() * rand()) % array[n - 1];
    double start = clock();
    cout << search(0, n - 1, to_search, array) << " "
         << array[search(0, n - 1, to_search, array)] << " "
         << (clock() - start) / CLOCKS_PER_SEC << endl;
    start = clock();
    cout << mem_search(0, n - 1, to_search, n, array) << " "
         << array[mem_search(0, n - 1, to_search, n, array)] << " "
         << (clock() - start) / CLOCKS_PER_SEC << endl;
    delete[] array;
    return 0;
}
