#include "pch.h"
#include "ext_operations.h"

#include <cmath>

void calculate(std::vector<double>& a, double& res, int l, int r) {
	if (l == r) {
		res += sin(a[l]) * cos(a[l]);
		return;
	}
	int m = (l + r) / 2;
	calculate(a, res, l, m);
	calculate(a, res, m + 1, r);
}
