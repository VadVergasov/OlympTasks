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
#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int> > all = {
    {220, 284},       {1184, 1210},     {2620, 2924},     {5020, 5564},
    {6232, 6368},     {10744, 10856},   {12285, 14595},   {17296, 18416},
    {63020, 76084},   {66928, 66992},   {67095, 71145},   {69615, 87633},
    {79750, 88730},   {100485, 124155}, {122265, 139815}, {122368, 123152},
    {141664, 153176}, {142310, 168730}, {171856, 176336}, {176272, 180848},
    {185368, 203432}, {196724, 202444}, {280540, 365084}, {308620, 389924},
    {319550, 430402}, {356408, 399592}, {437456, 455344}, {469028, 486178},
    {503056, 514736}, {522405, 525915}, {600392, 669688}, {609928, 686072},
    {624184, 691256}, {635624, 712216}, {643336, 652664}, {667964, 783556},
    {726104, 796696}, {802725, 863835}, {879712, 901424}, {898216, 980984}};

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int m, n;
    in >> m >> n;
    vector<pair<int, int> > res;
    for (int i = 0; i < all.size(); i++) {
        if (all[i].first > m && all[i].second < n) {
            res.push_back(all[i]);
        }
    }
    if (res.size() == 0) {
        out << "Absent\n";
        return 0;
    }
    for (int i = 0; i < res.size(); i++) {
        out << res[i].first << " " << res[i].second << "\n";
    }
    return 0;
}