#pragma once

#ifdef EXT_OPERATIONS_EXPORTS
#define EXT_OPERATIONS_API __declspec(dllexport)
#else
#define EXT_OPERATIONS_API __declspec(dllimport)
#endif

#include <vector>

extern "C" EXT_OPERATIONS_API void calculate(std::vector<double>&a, double& res, int l, int r);