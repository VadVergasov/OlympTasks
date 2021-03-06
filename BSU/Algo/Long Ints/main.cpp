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

class LongInt {
   public:
    deque<short> number;
    LongInt(string s) {
        number.resize(s.size());

        for (int i = 0; i < s.size(); i++) {
            number[i] = s[s.size() - i - 1] - '0';
        }
    }

    LongInt(int size) { number.resize(size, 0); }

    string ToString() {
        string res;

        int i = number.size() - 1;

        while (number[i] == 0) {
            i--;
        }

        for (; i >= 0; i--) {
            res += (number[i]) + '0';
        }

        return res;
    }

    LongInt operator+(LongInt second) {
        LongInt result(max(second.number.size(), this->number.size()));

        int i = 0;
        for (; i < min(second.number.size(), this->number.size()); i++) {
            result.number[i] += this->number[i] + second.number[i];
            if (result.number[i] > 9) {
                if (second.number.size() == this->number.size() &&
                    i == min(second.number.size(), this->number.size()) - 1) {
                    result.number.push_back(0);
                }
                result.number[i] -= 10;
                result.number[i + 1]++;
            }
        }

        cout << second.number.size() << " " << this->number.size() << "\n";

        if (second.number.size() > this->number.size()) {
            for (; i < second.number.size(); i++) {
                result.number[i] += second.number[i];
            }
        } else {
            for (; i < this->number.size(); i++) {
                result.number[i] += this->number[i];
            }
        }

        for (auto j : result.number) {
            cout << j << " ";
        }

        return result;
    }

    LongInt operator+=(LongInt second) {
        int i = 0;
        for (; i < min(second.number.size(), this->number.size()); i++) {
            this->number[i] += second.number[i];
            if (this->number[i] > 9) {
                if (second.number.size() == this->number.size() &&
                    i == min(second.number.size(), this->number.size()) - 1) {
                    this->number.push_back(0);
                }
                this->number[i] -= 10;
                this->number[i + 1]++;
            }
        }

        if (second.number.size() > this->number.size()) {
            for (; i < second.number.size(); i++) {
                this->number.push_back(0);
                this->number[i] += second.number[i];
            }
        }

        return *this;
    }

    bool operator<(LongInt second) {}
};

int main() {
    string fir, sec;
    cin >> fir >> sec;
    LongInt a = LongInt(fir);
    LongInt b = LongInt(sec);
    a += b;
    cout << (a + b).ToString();
    return 0;
}