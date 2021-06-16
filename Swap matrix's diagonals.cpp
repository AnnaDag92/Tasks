#include <iostream>

void FillMatrix(int arr[][3], int row, int col) {
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			std::cin >> arr[i][j];
		}
	}
}
void ShowMatrix(int arr[][3], int row, int col) {
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			std::cout << arr[i][j] << "\t";
		}
	}
	std::cout << std::endl;
}

void Swap(int arr[][3], int row, int col) {
	
	for (int i = 0; i < row; ++i) {
		int tmp = arr[i][i];
		arr[i][i] = arr[i][row - 1 - i]; 
		arr[i][row - 1 - i] = tmp;
	}
}

int main()
{
	const int row = 3;
	const int col = 3;
	int arr[row][col];
	FillMatrix(arr, row, col);
	ShowMatrix(arr, row, col);
	Swap(arr, row, col);
	ShowMatrix(arr, row, col);
}
