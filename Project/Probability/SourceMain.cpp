#include "Initializer.h"
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	mawile::Initializer* Initializer = new mawile::Initializer;

	/**
			@brief [bool: true] -> Write a log file.
	*/
	if (Initializer->Run(true) == false) {
		return (-1);
	}

	delete Initializer;

	return (0);
}