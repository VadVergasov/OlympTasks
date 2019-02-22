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
