#include <iostream>

void FillArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		std::cin >> arr[i];
}

void ShowArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
}

void NewArray(int*&arr,int size, int k) {
	if (size < 1 && k >= size)return;
	int* newarr = new int[k];
	for (int i = 0, j = 0; i < size; ++i) {
		if (i >= k)break;
		newarr[j] = arr[i];
		++j;
	}
	delete[] arr;
	arr = newarr;
}

int main()
{
	int size = 10;
	int k = 3;
	int* arr = new int[size];
	FillArray(arr, size);
	NewArray(arr, size, k);
	ShowArray(arr, size);
}


