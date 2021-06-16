#include <iostream>

void FillArray(int  *arr, const int  SIZE) {
	std::cout << "Fill array with integers" << std::endl;
	for (int i = 0; i < SIZE; ++i) {
		std::cin >> arr[i];
	}
}
void ReverseArray(int  *arr, const int  SIZE) {
	for (int i = 0, j = SIZE - 1; i < j; ++i, --j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
void PrintArray(int  arr[], const int  SIZE) {
	for (int i = 0; i < SIZE; ++i) {
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}

int main()
{
	const int size = 10;
	int arr[size]{};
	FillArray(arr, size);
	PrintArray(arr, size);
	ReverseArray(arr, size);
	PrintArray(arr, size);
}
