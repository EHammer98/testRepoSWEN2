
#include "cli.h"
#include <iostream>

int main() {
	CLI print;
	int arrayToSort[100];
	for (int i = 0; i < 100; i++) {
		arrayToSort[i] = rand() % 100;
	}
	print.showArray(arrayToSort);
	return 0;
}