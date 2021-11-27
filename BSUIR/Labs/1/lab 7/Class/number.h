#ifndef NUMBER_H
#define NUMBER_H

#include <algorithm>
#include <cassert>
#include <string>
#include <vector>

class Number {
   private:
    bool sign = false;    // Storing sign of the number
    unsigned short base;  // Storign base of the number
    std::vector<unsigned short>
        value;  // Storing value of the number as array of numbers in rank
    void checkBase(unsigned short base) const;  // To assert all bases

   public:
    Number(
        const std::string &number = "0",
        unsigned short base = 10);  // Constructor to convert number from string
    Number(const Number &number,
           unsigned short
               base);  // Constructor to convert number from one base to another
    Number(const std::vector<unsigned short> &number, unsigned short base,
           bool sign);  // Constructor to convert value array to number

    std::vector<unsigned short> getValue(unsigned short base = 0)
        const;  // Returns array, where element is the value of rank

    std::string getString(unsigned short base = 0)
        const;  // Returns string, which represents number

    long long getDec() const;  // Returns decimal value of the number

    bool getSign() const;  // Returns sign of the number

    unsigned long long length()
        const;  // Returns the length of string (or value arrray)

    Number getInstance() const;

    Number operator+(
        const Number &b) const;  // Overloading + operator for numbers
    Number operator-(
        const Number &b) const;  // Overloading - operator for numbers
};

#endif
