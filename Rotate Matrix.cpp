#include <iostream>
#include <string>

const int N = 4;
void RotateMatrix(int **arr) {
	int newarr[N][N] = {};
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			newarr[N - 1 - j][i] = arr[i][j];
		}
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			std::cout << newarr[i][j] << "  ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	int** arr = new int* [N];
	for (int i = 0; i < N; ++i) {
		arr[i] = new int[N];
		for (int j = 0; j < N; ++j) {
			std::cin >> arr[i][j];
		}
	}
	RotateMatrix(arr);
}