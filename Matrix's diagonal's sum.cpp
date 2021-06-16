#include <iostream>

void FillMatrix(int arr[][3], int row, int col) {
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			std::cin >> arr[i][j];
		}
	}
}

int Sum(int arr[][3], int row, int col) {
	int sum = 0;
	for (int i = 0; i < row; ++i) {
		sum += arr[i][i] + arr[i][row - 1 - i]; 
	}
	std::cout << sum << std::endl;
	return sum;
}

int main()
{
	const int row = 3;
	const int col = 3;
	int arr[row][col];
	FillMatrix(arr, row, col);
	Sum(arr, row, col);
}
