#include <iostream>


void FillArray(int* arr, int size) {
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
}
	
double SumOfElements(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	std::cout << "Sum of elements is: "<<sum << std::endl;
	return sum;
}

double MulOfElements(int* arr, int size) {
	int mul = 1;
	for (int i = 0; i < size; ++i) {
		mul *= arr[i];
	}
	std::cout << "Mul of elements is: " << mul << std::endl;
	return mul;
}


int main()
{
	const int size = 10;
	int arr[size];
	FillArray(arr, size);
	double arithmeticAverage = (SumOfElements(arr, size) + MulOfElements(arr, size)) / 2;
	std::cout <<"The arithmetic average is: "<< arithmeticAverage << std::endl;
}




