#include <iostream>

int Factorial(int a) {
	int factorial = 1;
	while (a > 1) {
		factorial *= a--;
	}
	return factorial;
}


int main()
{
	int a;
	std::cin >> a;
	std::cout << Factorial(a);
}


