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

int main() {
    vector<string> files = {"a_example",       "b_read_on",
                            "c_incunabula",    "d_tough_choices",
                            "e_so_many_books", "f_libraries_of_the_world"};
    for (auto file : files) {
        ifstream in(file + ".txt");
        ofstream out(file + "_out.txt");
        int b, l, d;
        in >> b >> l >> d;
        vector<int> score(b);
        for (int i = 0; i < b; i++) {
            int s;
            in >> s;
            score[i] = s;
        }
        vector<pair<pair<int, vector<int>>, pair<int, int>>> libraries(l);
        for (auto &[f, s] : libraries) {
            in >> f.first >> s.first >> s.second;
            f.second.resize(f.first);
            for (auto &i : f.second) {
                in >> i;
            }
            sort(f.second.rbegin(), f.second.rend());
        }
        vector<pair<long long, int>> cost_of_library(l);
        for (int i = 0; i < l; i++) {
            cost_of_library[i].second = i;
            for (int j = 0; j < libraries[i].first.second.size(); j++) {
                cost_of_library[i].first += score[libraries[i].first.second[j]];
            }
        }
        sort(cost_of_library.rbegin(), cost_of_library.rend());
        random_shuffle(cost_of_library.rbegin(), cost_of_library.rend());
        int last_signup = 0, num = 0;
        for (int i = 0;
             i < l &&
             last_signup + libraries[cost_of_library[i].second].second.first <=
                 d - 1;
             i++) {
            last_signup += libraries[cost_of_library[i].second].second.first;
            num++;
        }
        last_signup = 0;
        vector<pair<int, vector<int>>> res;
        vector<char> UsedBooks(
            b);  // used books for scanning 1 - used, 0 unused
        for (int i = 0; i < num; i++) {
            int id_of_library = cost_of_library[i].second;
            int days_to_sign_up = libraries[id_of_library].second.first;
            last_signup += days_to_sign_up;
            int days_left = d - last_signup,
                number_of_books_in_library =
                    libraries[id_of_library].first.first,
                number_of_book_per_day = libraries[id_of_library].second.second;
            vector<int> BookTmp;
            for (int j = 0; j < min(number_of_books_in_library,
                                    days_left * number_of_book_per_day);
                 j++) {
                int UpBound = 0;
                for (int k = 0; k < number_of_book_per_day + UpBound &&
                                j * number_of_book_per_day + k <
                                    number_of_books_in_library;
                     k++) {
                    int CurrentIdBook =
                        libraries[id_of_library]
                            .first
                            .second[j * libraries[id_of_library].second.second +
                                    k];  // current id of book

                    if (!UsedBooks[CurrentIdBook]) {
                        UsedBooks[CurrentIdBook] = 1;
                        BookTmp.push_back(
                            libraries[id_of_library].first.second
                                [j * libraries[id_of_library].second.second +
                                 k]);
                    } else {
                        ++UpBound;
                    }
                }
            }
            if (BookTmp.size() == 0) {
                continue;
            }
            res.push_back({id_of_library, BookTmp});
        }
        out << res.size() << "\n";
        for (auto i : res) {
            out << i.first << " " << i.second.size() << "\n";
            for (auto j : i.second) {
                out << j << " ";
            }
            out << "\n";
        }
    }
    return 0;
}
