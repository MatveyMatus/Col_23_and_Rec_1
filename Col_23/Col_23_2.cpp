#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int size_array, sum_X,
		idx_average = 0,
		elem_1 = 0,
		idx_1 = 0,
		idx_2 = 0,
		elem_x = 0;
	cout << "Set the size of the array: ";
	cin >> size_array;
	int* a = new int[size_array];
	cout << "Fill the array in strict ascending order: ";
	for (int j = 0; j < size_array; ++j)
		cin >> a[j];
	cout << "Set the sum of the elements: ";
	cin >> sum_X;
	if ((a[size_array - 1] * 2) <= sum_X) {
		cout << "I can't find the specified amount ";
		return 1;
	}
	else if (a[0] >= sum_X) {
		cout << "I can't find the specified amount ";
		return 1;
	}
	idx_2 = size_array - 1;
	for (int i = 0; i < size_array; ++i) {
		elem_1 = a[i];
		elem_x = sum_X - elem_1;
		while (idx_1 < idx_2) {
			idx_average = idx_1 + (idx_2 - idx_1) / 2;
			if (elem_x <= a[idx_average]) {
				idx_2 = idx_average;
			}
			else {
				idx_1 = idx_average + 1;
			}
		}
		if (a[idx_2] == elem_x) {
			cout << "Item found!" << endl;
			cout << elem_1 << " " << elem_x;
			return 0;
		}
	}
	cout << "Could not find items for the specified amount";
}