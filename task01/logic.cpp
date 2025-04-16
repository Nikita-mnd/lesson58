// [The Count of Even Digits]
// ���������� ������ ���� 
//
// ���������� ����������� ����������� �������, ������� ������������ 
// ���������� ������ ���� � ��������� ������������� ������ �����.
// ����� ����� ���� ��� �������������, ��� � �������������.
// �� ��������, ��� ����� ���� � ���������� �������� ������ ������. 

#include "logic.h"

int count_even_digits(long long number, int count = 0) {
	if (number <= 0) {
		return number < 0 ? count : count++;
	}
	if (number < 10) {
		return number % 2 == 0 ? count++ : count;
	}
	int last_number = number % 10;
	if (last_number % 2 == 0) {
		count++;
	}

	count = count_even_digits(number / 10, count);

	return count;
}

//int sum_of_array_negative_element(int array, int size) {
//
//
//
//}