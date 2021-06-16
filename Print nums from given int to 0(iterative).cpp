#include <iostream>

void Print(int a) {
	if (a < 0)
		return;
	while(a>=0)
	std::cout << a--<<std::endl;
}


int main()
{
	int a;
	std::cin >> a;
	Print(a);
}


