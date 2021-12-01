#include "number.h"

void add(short *cur, short val,
         unsigned short base) {  // Add value to the rank
    *cur += val;                 // Adding value to the digit
    if (*cur >= base) {          // If digit is equal or greater than the base
        *cur %= base;            // Get mod of digit
        cur--;                   // Move pointer to greater rank
        add(cur, 1, base);       // Do the same, but add 1
    }
}

Number::Number(const std::string &number, unsigned short base) {
    checkBase(base);
    if (number.front() == '-') {
        sign = true;
    }
    this->base = base;
    for (auto i : number) {
        if (i == '-') {
            continue;
        }
        if (isdigit(i)) {
            value.push_back(static_cast<char>(i - '0'));
        } else if (isupper(i)) {
            value.push_back(static_cast<char>(i - 'A' + 10));
        } else {
            value.push_back(static_cast<char>(i - 'a' + 10));
        }
        assert(value.back() <
               base);  // Check if the number is correct in current base
    }
}

Number::Number(const Number &number, unsigned short base) {
    checkBase(base);
    if (number.getSign()) {
        sign = true;
    }
    this->base = base;
    long long decimal = number.getDec();  // Getting decimal value of number
    if (number.getSign()) {
        sign = true;
        decimal *= -1;
    }
    while (decimal) {  // Converting to another base
        value.push_back(decimal % base);
        decimal /= base;
    }
    reverse(value.begin(), value.end());  // Reversing digits
}

Number::Number(const std::vector<unsigned short> &number, unsigned short base,
               bool sign) {
    checkBase(base);
    value = number;
    this->base = base;
    this->sign = sign;
}

std::vector<unsigned short> Number::getValue(unsigned short base) const {
    if (!base || base == this->base) {
        return value;  // If requested base is the same, just return value array
    }
    checkBase(base);
    return Number(getInstance(), base).getValue();  // Or convert to another
                                                    // base
}

std::string Number::getString(unsigned short base) const {
    if (!base) {
        base = this->base;
    }
    checkBase(base);
    std::string res = "";
    if (sign) {
        res += '-';
    }
    for (auto i : getValue(base)) {
        if (i < 10) {
            res += static_cast<char>('0' + i);
        } else {
            res += static_cast<char>('A' + i - 10);
        }
    }
    return res;
}

long long Number::getDec() const {
    long long res = 0;
    for (auto cur : value) {
        res *= base;
        res += cur;
    }
    if (sign) {
        res *= -1;
    }
    return res;
}

bool Number::getSign() const { return sign; }

unsigned long long Number::length() const { return value.size(); }

void Number::checkBase(unsigned short base) const {
    assert(base > 1 && base < 37);
}

Number Number::getInstance() const { return *this; }

Number Number::operator+(const Number &num) const {
    assert(base == num.base);
    Number res, a(getValue(), base, !sign),
        b(num.getValue(), base, !num.getSign());
    if (getSign() && num.getSign()) {  // -a + (-b) = -(a + b)
        res = Number((a + b).getValue(), base, true);
    } else if (getSign() && !num.getSign()) {  //-a + b = b - a
        res = Number(b - getInstance(), base);
    } else if (!getSign() && num.getSign()) {  // a + (-b) = a - b
        res = Number(getInstance() - b, base);
    } else {  // a + b
        int len = std::max(length(), num.length()) + 1,
            mn = std::min(length(),
                          num.length());  // len is maximum length of the result
        std::vector<short> digits(len);
        std::vector<unsigned short> first = getValue(), second = num.getValue(),
                                    result(len);
        for (int i = 0; i < mn; i++) {
            add(&digits[len - i - 1],
                static_cast<short>(first[first.size() - i - 1]) +
                    static_cast<short>(second[second.size() - i - 1]),
                base);  // Getting sum of the digits
        }
        if (mn == static_cast<short>(first.size())) {
            for (int i = mn; i < len - 1; i++) {
                add(&digits[len - i - 1],
                    static_cast<short>(second[second.size() - i - 1]),
                    base);  // Add digits of the bigger number
            }
        } else {
            for (int i = mn; i < len - 1; i++) {
                add(&digits[len - i - 1],
                    static_cast<short>(first[first.size() - i - 1]),
                    base);  // Add digits of the bigger number
            }
        }
        for (int i = 0; i < len; i++) {
            result[i] = digits[i];  // Converting short to unsigned short
        }
        res = Number(result, base, false);  // Final result
    }
    return res;
}

Number Number::operator-(const Number &num) const {
    assert(base == num.base);
    Number res, a(getValue(), base, !sign),
        b(num.getValue(), base, !num.getSign());
    if (getSign() && num.getSign()) {  //-a - (-b) = b - a
        res = Number(b - getInstance(), base);
    } else if (getSign() && !num.getSign()) {  //-a - b = -(a + b)
        res = Number((getInstance() + b).getValue(), base, true);
    } else if (!getSign() && num.getSign()) {  // a - (-b) = a + b
        res = Number(getInstance() + b, base);
    } else {  // a - b
        int len = std::max(length(), num.length()) + 1,
            mn = std::min(length(),
                          num.length());  // len is maximum length of the result
        std::vector<short> digits(len);
        std::vector<unsigned short> first = getValue(), second = num.getValue(),
                                    result(len);
        bool final_sign = false;
        if (first.size() < second.size()) {
            // If length of subtrahend (b) is greater than the minuend (a) we
            // should find -(b-a)
            swap(first, second);
            final_sign = true;
        } else if (first.size() == second.size()) {
            for (int i = 0; i < mn; i++) {
                if (first[i] && second[i]) {  // Non zero digits
                    if (first[i] <
                        second[i]) {  // If first non zero digit of subtrahend
                                      // (b) is greater than the minuend's (a)
                                      // we should find -(b-a)
                        swap(first, second);
                        final_sign = true;
                        break;
                    } else {
                        break;
                    }
                }
            }
        }
        // Now first is larger than second.
        for (int i = 0; i < mn; i++) {
            digits[len - i - 1] =
                first[first.size() - i - 1] - second[second.size() - i - 1];
        }
        for (int i = mn; i < len - 1; i++) {
            digits[len - i - 1] = first[first.size() - i - 1];
        }
        for (int i = len - 1; i > 0; i--) {
            if (digits[i] <
                0) {  // If there is negative digits we should find
                      // greater non zero rank to carry over the ranks
                int pos = i - 1;
                while (digits[pos] <= 0) {
                    pos--;
                }
                digits[pos]--;
                for (int j = pos + 1; j < i; j++) {
                    digits[j] += base - 1;
                }
                digits[i] += base;
            }
        }
        for (int i = 0; i < len; i++) {
            result[i] = digits[i];
        }
        res = Number(result, base, final_sign);
    }
    return res;
}
