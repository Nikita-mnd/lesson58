#include <iostream>
using namespace std;

bool search(int* array, int first, int last, int value) {

	if (last < first) {
		return false;
	}

	int  midle = (last + first) / 2;
	if (array[midle] == value) {
		return true;
	}
	if (array[midle] > value) {
		first = midle - 1;
	}
	else {
		first = midle + 1;
	}

	return search(array, first, last, value);
}

bool binary_search(int* array, int size, int value) {

	if (!array || size <= 0) {
		return false;
	}


	return search(array, 0, size - 1, value);
}