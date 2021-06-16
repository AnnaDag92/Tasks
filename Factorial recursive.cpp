#include <iostream>

int Factorial(int a) {
	if (a <= 1)
		return 1;
		return a * Factorial(a - 1);
}


int main()
{
	int a;
	std::cin >> a;
	std::cout << Factorial(a);
}


