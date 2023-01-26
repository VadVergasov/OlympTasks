#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    long double res, p1, p2;
    int n;
    std::cin >> n;

    p1 =
        1 - pow(362.0 / 365.0, n) - n * pow(362.0 / 365.0, n - 1) * 3.0 / 365.0;
    p2 =
        1 - pow(364.0 / 365.0, n) - n * pow(364.0 / 365.0, n - 1) * 1.0 / 365.0;

    res = 52.0 * p1 + 209.0 * p2;

    if (n == 1) {
        res = 0.0;
    }

    std::cout << std::fixed << std::setprecision(12) << res;
    return 0;
}
