#include <iostream>

void Print(int a) {
	if (a < 0)
		return;
	std::cout << a;
	Print(--a);
}


int main()
{
	int a;
	std::cin >> a;
	Print(a);
}


