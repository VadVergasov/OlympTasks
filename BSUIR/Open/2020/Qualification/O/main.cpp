// Main code for this task.
// Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
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
#include <bits/stdc++.h>

using namespace std;

long double solve_qeq(long double a, long double b, long double c) {
    long double disc = b * b - 4 * a * c;
    if (disc < 0) {
        return (-1e18 + 0.5);
    }
    return (((-b + (double)sqrt(disc)) / (2 * a)));
}
int main() {
    int n;
    cin >> n;
    vector<long long> v(n);
    long double sum = 0, avg = 0, sumd = 0, disp = 0;
    for (auto &i : v) {
        cin >> i;
        sum += i;
    }
    avg = (sum / (double)n);
    for (int i = 0; i < n; ++i) {
        sumd += (v[i] - avg) * (v[i] - avg);
        disp += (v[i] - avg) * (v[i] - avg);
    }
    disp /= (double)n;
    auto inZ = [&](long double x) {
        return (ceil(x) == floor(x) && x == (long long)x);
    };

    for (int i = 0; i < n; ++i) {
        long double rest_sum = sum - v[i];
        long double rest_sumd = sumd - (v[i] * 1. - avg) * (v[i] * 1. - avg);
        long double sum_of_el = avg * (n + 1) - rest_sum;
        long double sum_of_sq =
            (n + 1) * disp - rest_sumd + 2 * avg * sum_of_el - 2 * avg * avg;

        long double higher =
            solve_qeq(2, -2 * sum_of_el, sum_of_el * sum_of_el - sum_of_sq);
        if (inZ(higher) && inZ(sum_of_el - higher)) {
            cout << "Possible\n";
            cout << i + 1 << " " << higher << " " << sum_of_el - higher;
            return 0;
        }
    }
    cout << "Impossible";
    return 0;
}