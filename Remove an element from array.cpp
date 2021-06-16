#include <iostream>

void FillArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		std::cin >> arr[i];
}

void ShowArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
}

void RemoveElement(int*&arr,int size, int index) {
	if (size < 1 && index >= size)return;
	int* newarr = new int[size-1];
	for (int i = 0, j = 0; i < size; ++i) {
		if (i == index)continue;
		newarr[j] = arr[i];
		++j;
	}
	delete[] arr;
	arr = newarr;
}

int main()
{
	int size = 10;
	int index = 5;
	int* arr = new int[size];
	FillArray(arr, size);
	RemoveElement(arr, size, index);
	ShowArray(arr, size);
}


