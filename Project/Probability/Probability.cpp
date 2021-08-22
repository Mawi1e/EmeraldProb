#include "Probability.h"

namespace mawile {
	BigInt Probability::Factorial(unsigned int n) {
		try {
			if ((this->capacity) >= n) {
				return (this->factorialN)[n];
			}
			else {
				for (unsigned int i = (this->capacity) + 1; i <= n; ++i) {
					factorialN.push_back(factorialN[i - 1] * i);
					++(this->capacity);
				}
			}

			return (this->factorialN)[(this->capacity)];
		}
		catch (std::exception&) { }

		return (0);
	}

	BigInt Probability::Permutation(unsigned int n, unsigned int r, bool duplicates = false) {
		try {
			if (n < r) return (0);

			BigInt fnr = Factorial(n - r);

			if (duplicates == false) {
				if (fnr < 0) return (std::numeric_limits<int>::min());
				return (Factorial(n) / fnr);
			}

			return static_cast<BigInt>(std::pow(n, r));
		}
		catch (std::exception&) {}

		return (0);
	}

	BigInt Probability::Combination(unsigned int n, unsigned int r, bool duplicates = false) {
		try {
			if (n < r) return (0);

			BigInt fn = Factorial(n);
			BigInt fr = Factorial(r);

			if (duplicates == false) {
				if (fr < 0) return (std::numeric_limits<int>::min());
				return (Permutation(n, r, duplicates) / fr);
			}

			if (fn < 0) return (std::numeric_limits<int>::min());
			return (Permutation(n + r - 1, n, duplicates) / fn);
		}
		catch (std::exception&) {}

		return (0);
	}
}