
#include "cli.h"
#include "bubbleSort.h"
#include <iostream>

int main() {
	cli print;
	bubbleSort sort1;
	int arrayToSort[100];
	for (int i = 0; i < 100; i++) {
		arrayToSort[i] = rand() % 100;
	}
	sort1.sort(arrayToSort);
	print.showArray(arrayToSort);
	return 0;
}

