#include <iostream>
#include <string>

void FillMatrix( int row, int col) {
	int** arr = new int* [row];
	int* newarr = new int[row * col];
	int k = 0;
	for ( int i = 0; i < row; ++i) {
		*(arr + i) = new int[col];
		for ( int j = 0; j < col; ++j, ++k) {
			std::cin >> arr[i][j];
			newarr[k] = arr[i][j];
	    }
	}
	for (int i = 0; i < row * col; ++i) {
		std::cout << newarr[i] << "\t";
	}
}
		

int main()
{   
	const int row = 3;
	const int col = 3;
	FillMatrix(row, col);
}



