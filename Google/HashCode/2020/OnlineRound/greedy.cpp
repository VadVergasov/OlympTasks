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

vector<pair<pair<long long, vector<long long>>, pair<long long, long long>>>
    libraries;

bool cmp(pair<long long, long long> a, pair<long long, long long> b) {
    return libraries[a.second].second.second >
           libraries[b.second].second.second;
}

int main() {
    vector<string> files = {"a_example",       "b_read_on",
                            "c_incunabula",    "d_tough_choices",
                            "e_so_many_books", "f_libraries_of_the_world"};
    for (auto file : files) {
        ifstream in(file + ".txt");
        ofstream out(file + "_out.txt");
        long long b, l, d;
        in >> b >> l >> d;
        vector<long long> score(b);
        for (long long i = 0; i < b; i++) {
            long long s;
            in >> s;
            score[i] = s;
        }
        libraries.resize(l);
        for (auto &[f, s] : libraries) {
            in >> f.first >> s.first >> s.second;
            f.second.resize(f.first);
            for (auto &i : f.second) {
                in >> i;
            }
            sort(f.second.rbegin(), f.second.rend());
        }
        vector<pair<long long, long long>> cost_of_library(l);
        for (long long i = 0; i < l; i++) {
            cost_of_library[i].second = i;
            for (long long j = 0; j < libraries[i].first.second.size(); j++) {
                cost_of_library[i].first += score[libraries[i].first.second[j]];
            }
        }
        sort(cost_of_library.rbegin(), cost_of_library.rend(), cmp);
        random_shuffle(cost_of_library.rbegin(), cost_of_library.rend());
        long long last_signup = 0, num = 0;
        for (long long i = 0;
             i < l &&
             last_signup + libraries[cost_of_library[i].second].second.first <=
                 d - 1;
             i++) {
            last_signup += libraries[cost_of_library[i].second].second.first;
            num++;
        }
        out << num << "\n";
        last_signup = 0;
        for (long long i = 0; i < num; i++) {
            long long id_of_library = cost_of_library[i].second;
            out << id_of_library << " ";
            long long days_to_sign_up = libraries[id_of_library].second.first;
            last_signup += days_to_sign_up;
            long long days_left = d - last_signup,
                      number_of_books_in_library =
                          libraries[id_of_library].first.first,
                      number_of_book_per_day =
                          libraries[id_of_library].second.second;
            out << number_of_books_in_library << "\n";
            for (long long j = 0; j < number_of_books_in_library; j++) {
                for (long long k = 0; k < number_of_book_per_day &&
                                      j * number_of_book_per_day + k <
                                          number_of_books_in_library;
                     k++) {
                    out << libraries[id_of_library].first.second
                               [j * libraries[id_of_library].second.second + k]
                        << " ";
                }
            }
            out << "\n";
        }
    }
    return 0;
}