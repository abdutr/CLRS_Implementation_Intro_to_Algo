#pragma once
#include <vector>

long long int fibonacci_dynamic(long long int a);

long long int fibonacci_dynamic(long long int a) {
	std::vector<long long int> solutions;
	solutions.push_back(0);
	solutions.push_back(1);
	for (int i = 2; i <= a; i++) {
		solutions.push_back(solutions[i - 1] + solutions[i - 2]);
	}
	return solutions[a];
}