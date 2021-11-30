#include "cli.h"
#include <iostream>

void CLI::showArray(int[] sortArray) {
	for (int i = 0; i < 100; i++) {
		cout << i + 1 << "::" << sortArray[i] << endl;
	}
}