#include <iostream>
using namespace std;

int sum_negotive_element(int* m, int size, int count = 0) {

	if (size == count) {
		return 0;
	}
	if (m[size] < 0) {
		count += m[size];
	}

	return sum_negotive_element(m, size--, count);
}

int sum_absolute_negotive_element(int* m, int size) {
	if (size <= 0 || !m) {
		return 0;
	}

	//base case
	if (size == 1) {
		return *m < 0 ? -*m : 0;
	}
	size--;

	int element = *(m + size);
	element = element < 0 ? -element : 0;

	return element + sum_absolute_negotive_element(m, size);
	//return m[size] + sum_absolute_negotive_element(m, size);
}