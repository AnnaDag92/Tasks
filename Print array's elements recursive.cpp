#include <iostream>

void FillArray(int* arr, int size) {
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
}

void Print(int* arr, int start, int size) {
	if (start >= size)
		return;
	std::cout << arr[start++] << std::endl;
	Print(arr,start ,size);
}

int main()
{
	int start = 0;
	const int size = 10;
	int arr[size];
	FillArray(arr, size);
	Print(arr,start, size);
}


