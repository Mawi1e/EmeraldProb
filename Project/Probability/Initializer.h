#pragma once
#include "Probability.h"
#include <iostream>
#include <fstream>
#include <string>

namespace mawile {
	bool LogFile(BigInt, BigInt, BigInt, BigInt);

	class Initializer {
	public:
		bool Run(bool);

		Initializer() = default;
		Initializer(int);
		~Initializer() = default;

	private:
		mawile::Probability Prob;
	};
}