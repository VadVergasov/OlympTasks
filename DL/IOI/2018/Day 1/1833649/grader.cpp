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
#include "grader.h"
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>

static const int MAX_Q = 8000;
static const string ABC("ABXY");

static string S;
static int N, Q = 0;

void rageExit(string errMsg) {
    std::cout << errMsg << std::endl;
    exit(0);
}

int press(string p) {
    Q++;
    if (Q > MAX_Q) rageExit("too many moves");
    int L = p.length();
    if (L > 4 * N) rageExit("invalid press");
    int coins = 0, j = 0;
    for (char& c : p) {
        if (ABC.find(c) == string::npos) rageExit("invalid press");
        if ((j + 1 <= N) && (S[j] == c))
            j++;
        else
            j = (S[0] == c ? 1 : 0);
        coins = (coins < j ? j : coins);
    }
    return coins;
}

int main() {
    std::getline(std::cin, S);
    N = S.length();
    string res = guess_sequence(N);
    if (res != S) rageExit("wrong guess");
    std::cout << "Accepted: " << Q << std::endl;
}
