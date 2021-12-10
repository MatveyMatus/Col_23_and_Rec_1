#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int size_array, sum_X, elem_1, elem_2, elem_x, index_1, index_2,
		flag = 0;
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
		return 2;
	}
	index_1 = 0;
	index_2 = size_array - 1;
	while (index_1 <= index_2) {
		elem_1 = a[index_1];
		elem_2 = a[index_2];
		elem_x = elem_1 + elem_2;
		if (elem_x > sum_X) {
			index_2--;
		}
		else if (elem_x < sum_X) {
			index_1++;
		}
		else {
			cout << "Item found!" << endl;
			cout << elem_1 << " " << elem_2 << endl;
			return 0;
			// На случай, если нужно выввести все пары, то нужно убрать "return 0" и раскрыть комментарий написанный ниже
			// flag = 1;
			// index_1++;
			// index_2--;
		}
	}
	cout << "Could not find items for the specified amount";

}