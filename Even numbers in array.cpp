#include <iostream>
#include <string>

void EvenNumbers(int* arr, int size) {
	int count = 0;
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
		if (!(arr[i] % 2)) {
			++count;
		}
	}
	std::cout << count << std::endl;
}

int main()
{   
	const int size = 10;
	int arr[size];
	EvenNumbers(arr, size);
}



