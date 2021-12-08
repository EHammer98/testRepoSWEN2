#include "cli.h"
#include <iostream>

void cli::showArray(int sortArray[]) {

	for (int i = 0; i < 100; i++) {
		std::cout << i + 1 << "::" << sortArray[i] << std::endl;
	}
}

void cli::showCharArray(int sortArray[]) {

	for (int i = 0; i < 100; i++) {
		std::cout << i + 1 << "::" << (char)sortArray[i] << std::endl;
	}
}