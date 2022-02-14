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
#include <iostream>

using namespace std;

int substract(int a, int b) {  // Simillar to sum
    while (b) {
        int c = (~a) & b;
        a ^= b;
        b = c << 1;
    }
    return a;
}

void inc(int &a) {  // Finding first 0 bit and making it equal to the 1
    int mask = 1;
    while (a & mask) {
        a &= ~mask;
        mask <<= 1;
    }
    a |= mask;
}

int sum(int a, int b) {
    while (b) {
        int c = a & b;  // Finding bits, which are equal to 1 in both a and b
        a ^= b;         // Setting them to 0
        b = c << 1;     // Now b is c*2, which means, that same bits in a and b
                        // moving to greater ranks
    }
    return a;
}

int multiply(int a, int b) {
    int res = 0;
    while (b) {       // While b isn't 0
        if (b & 1) {  // If b is odd add a to res
            res = sum(res, a);
        }
        a <<= 1;  // So we can multiply a by 2, but divide b by 2 to save same
                  // answer
        b >>= 1;
    }
    return res;
}

int divide(int a, int b) {
    int res = 0;
    while (a >= b) {
        int i = 0, d = b;
        while (a >= (d << 1)) {  // Looking for 2^n which fits in a, so n-th bit
                                 // in result will be 1
            inc(i);
            d <<= 1;
        }
        res |= 1 << i;
        a = substract(a, d);
    }
    return res;
}

int mod(int a, int b) {
    return substract(a, multiply(b, divide(a, b)));  // a - b * (a / b)
}

// Variant 6
const int primes[] = {7, 23, 197};

int main() {
    int n;
    cout << "Enter number to get mod for primes: ";
    while (!(cin >> n)) {
        cout << "Enter number to get mod for primes: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.clear();
    for (int i = 0; i < 3; i++) {
        cout << "Mod for " << primes[i] << " is " << mod(n, primes[i]) << endl;
    }
    return 0;
}
