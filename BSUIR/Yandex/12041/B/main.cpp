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

vector<char> state;

vector<unsigned long long> nums = {
    1,         64,        729,       1296,      4096,      10000,     15625,
    38416,     46656,     50625,     82944,     117649,    194481,    234256,
    262144,    456976,    531441,    640000,    944784,    1000000,   1185921,
    1336336,   1500625,   1771561,   2085136,   2313441,   2458624,   2985984,
    3240000,   4477456,   4826809,   5308416,   6765201,   7290000,   7529536,
    9150625,   10556001,  11316496,  11390625,  12446784,  14776336,  14992384,
    16777216,  17850625,  20250000,  22667121,  24137569,  28005264,  29246464,
    29986576,  34012224,  35153041,  36905625,  40960000,  45212176,  47045881,
    52200625,  54700816,  57289761,  60466176,  64000000,  68574961,  74805201,
    75898944,  78074896,  81450625,  85525504,  85766121,  96040000,  113379904,
    126247696, 133448704, 141776649, 148035889, 148060224, 151807041, 152473104,
    156250000, 157351936, 170772624, 174900625, 191102976, 193877776, 200533921,
    207360000, 221533456, 228886641, 244140625, 276922881, 286557184, 308915776,
    312900721, 322417936, 333135504, 339738624, 387420489, 395254161, 406586896,
    418161601, 432972864, 442050625, 454371856, 466560000, 481890304, 577200625,
    585640000, 594823321, 600250000, 623201296, 639128961, 671898241, 675584064,
    688747536, 724255744, 729000000, 759333136, 791015625, 796594176, 864536409,
    887503681, 945685504, 959512576, 974188944, 981506241};

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    long long n;
    in >> n;
    /*int to = ceil(cbrt(n));
    vector<bool> prime(to, true);
    for (int i = 4; i <= to; i += 2) {
        prime[i] = false;
    }
    for (int i = 3; i < sqrt(to); i += 2) {
        if (prime[i]) {
            for (int j = i * i; j <= to; j += i) {
                prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= to; i++) {
        if (prime[i]) {
            primes.push_back(i);
        }
    }
    deque<pair<int, int> > history;
    history.push(make_pair(primes.front(), 0));
    int cur = history.front().first;
    int mn = 0;
    while (cur != primes.back()) {
        history.push_back(make_pair(primes[mn], mn));
        if()
    }*/
    // 10^10 elements need 10GB of memory((( I need more memory...
    /*state.resize(n, 1);
    for (int i = 2; i <= n; i += 2) {
        state[i]++;
    }
    for (int i = 3; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            state[j]++;
            if (state[j] == 6) {
                state[j] = 0;
            }
        }
    }
    long long res = 0;
    for (int i = 1; i <= n; i++) {
        if (state[i] == 1) {
            res++;
            cout << i << ", ";
        }
    }
    out << res;*/
    /*for (int i = 1000000000; i <= 3000000000; i++) {
        vector<pair<int, int> > p;
        unsigned long long num = 1;
        int cur = i;
        for (int j = 2; j <= sqrt(i); j++) {
            bool prime = true;
            for (int k = 2; k <= sqrt(j); k++) {
                if (j % k == 0) {
                    prime = false;
                    break;
                }
            }
            if (!prime) {
                continue;
            }
            if (i % j == 0) {
                p.push_back(make_pair(j, 0));
                while (cur % j == 0) {
                    p.back().second++;
                    cur /= j;
                }
            }
        }
        if (cur > 1) {
            p.push_back(make_pair(cur, 1));
        }
        for (int j = 0; j < p.size(); j++) {
            num *= (p[j].second + 1);
        }
        if (num == 1 && i != 1) {
            num++;
        }
        num--;
        // cout << i << " " << num << "\n";
        // cout << "\n";
        if (num % 6 == 0) {
            out << i << ", ";
        }
        if (i % 10000 == 0) {
            cout << i << "\n";
        }
    }*/
    int res;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > n) {
            break;
        }
        res++;
    }
    out << res;
    return 0;
}