#include "vector_addon.h"

void multiply(std::vector<double> &a, std::vector<double> &b, std::vector<double> &res){
	res.resize(a.size());

	for (int i = 0; i < a.size(); i++) {
		res[i] = a[i] * b[i];
	}
}

void generate_second(std::vector<double> &res) {
	for (int i = 0; i < 10; i++) {
		res[i] = 0.1 * tan(0.1 * (i + 1.0));
	}
}
