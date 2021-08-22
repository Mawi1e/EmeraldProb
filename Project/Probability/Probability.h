#pragma once
#include <vector>
#include <cmath>
#include <limits>

using BigInt = long long int;

namespace mawile {
	class Probability {
	public:
		BigInt Factorial(unsigned int);
		BigInt Permutation(unsigned int, unsigned int, bool);
		BigInt Combination(unsigned int, unsigned int, bool);

		Probability() = default;
		~Probability() = default;

	private:
		unsigned int capacity = 1;
		std::vector<BigInt> factorialN = { 1, 1 };
	};
}