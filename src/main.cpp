
#include "cli.h"
#include "bubbleSort.h"
#include "heapSort.h"
#include <iostream>

int main() {
	cli print;
	bubbleSort sort1;
	heapSort sort3;
	int arrayToSort1[100];
	int arrayToSort3[100];
	for (int i = 0; i < 100; i++) {
		arrayToSort1[i] = rand() % 100;
		arrayToSort3[i] = rand() % 100;
	}
	sort1.sort(arrayToSort1);
	sort3.sort(arrayToSort3);
	std::cout << "Bubblesort" << std::endl;
	print.showArray(arrayToSort1);
	std::cout << "Heapsort" << std::endl;
	print.showArray(arrayToSort3);

	return 0;
}

