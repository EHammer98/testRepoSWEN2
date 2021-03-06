#include "cli.h"
#include "bubbleSort.h"
#include "mergeSort.h"
#include "heapSort.h"
#include <iostream>

int main() {
	cli print;
	bubbleSort sort1;
	mergeSort sort2;
	heapSort sort3;

	int arrayToSort[100];
	int arrayToSort2[100];
	int arrayToSort3[100];

	std::string newString = "hireabvherabilelajlvinreaingpiaregibiagbihervhaebrhvabeilhireabvherabilelajlvinreaingpiaregibiagbihe";

	for (int i = 0; i < 100; i++)
	{
		arrayToSort2[i] = rand() % 100;
		arrayToSort3[i] = rand() % 100;
	}

	for (int j = 0; j < newString.length(); j++)
	{
		arrayToSort[j] = (int)newString[j];
	}
	sort1.sort(arrayToSort);
	sort2.sort(arrayToSort2, 0, 99);
	sort3.sort(arrayToSort3);


	std::cout << "Bubblesort" << std::endl;
	print.showCharArray(arrayToSort);
	std::cout << "Mergesort" << std::endl;
	print.showArray(arrayToSort2);
	std::cout << "Heapsort" << std::endl;
	print.showArray(arrayToSort3);
	return 0;
}

