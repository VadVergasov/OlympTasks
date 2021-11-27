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
#include <iostream>
#include <vector>

using namespace std;

const vector<pair<int, string> > nums = {
    {1, "I"},   {4, "IV"},   {5, "V"},   {9, "IX"},  {10, "X"},
    {40, "XL"}, {50, "L"},   {90, "XC"}, {100, "C"}, {400, "CD"},
    {500, "D"}, {900, "CM"}, {1000, "M"}};

int main() {
    int n;
    cout << "Enter number to convert to Rome: ";
    while (!(cin >> n) || n < 1 || n > 4999) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter number to convert to Rome: ";
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string res;
    while (n) {
        int i = nums.size() - 1;
        while (nums[i].first > n && i > 0) {
            i--;
        }
        n -= nums[i].first;
        res += nums[i].second;
    }
    cout << res << endl;
    return 0;
}
