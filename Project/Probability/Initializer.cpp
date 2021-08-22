#include "Initializer.h"

namespace mawile {
	bool LogFile(BigInt Permutation, BigInt dPermutation, BigInt Combination, BigInt dCombination) {
		std::wofstream ofs("log.txt");

		if (ofs.is_open()) {
			ofs << "Permutation -> ";
			if (Permutation >= 0) ofs << Permutation;
			else ofs << "Out of Bounds.";
			ofs << '\n';

			ofs << "Duplicate Permutation -> ";
			if (dPermutation >= 0) ofs << dPermutation;
			else ofs << "Out of Bounds.";
			ofs << '\n';

			ofs << "Combination -> ";
			if (Combination >= 0) ofs << Combination;
			else ofs << "Out of Bounds.";
			ofs << '\n';

			ofs << "Duplicate Combination -> ";
			if (dCombination >= 0) ofs << dCombination;
			else ofs << "Out of Bounds.";
			ofs << '\n';

			return true;
		}

		return false;
	}

	bool Initializer::Run(bool writeFile = false) {
		int n, r;

		while (true) {
			std::cout << "£îªòìýÕôª·ªÆª¯ªÀªµª¤ > ";
			std::cin >> n;

			std::cout << "rªòìýÕôª·ªÆª¯ªÀªµª¤ > ";
			std::cin >> r;

			BigInt Permutation = Prob.Permutation(n, r, false);
			BigInt dPermutation = Prob.Permutation(n, r, true);
			BigInt Combination = Prob.Combination(n, r, false);
			BigInt dCombination = Prob.Combination(n, r, true);

			std::cout << "Permutation -> ";
			if (Permutation >= 0) std::cout << Permutation;
			else std::cout << "Out of Bounds.";
			std::cout << '\n';

			std::cout << "Duplicate Permutation -> ";
			if (dPermutation >= 0) std::cout << dPermutation;
			else std::cout << "Out of Bounds.";
			std::cout << '\n';

			std::cout << "Combination -> ";
			if (Combination >= 0) std::cout << Combination;
			else std::cout << "Out of Bounds.";
			std::cout << '\n';

			std::cout << "Duplicate Combination -> ";
			if (dCombination >= 0) std::cout << dCombination;
			else std::cout << "Out of Bounds.";
			std::cout << '\n';

			if (writeFile == true) {
				if (LogFile(Permutation, dPermutation, Combination, dCombination) == false) {
					return (false);
				}
			}
		}

		return true;
	}

	Initializer::Initializer(int nMax) {
		(this->Prob).Factorial(nMax);
	}
}