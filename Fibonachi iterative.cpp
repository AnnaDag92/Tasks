#include <iostream>

int Fibonachi(int a) {
	if (a < 0)
		return -1;
	if (a == 0 || a == 1)
		return a;
	int num1 = 0, num2 = 1, newnum;
	for (int i = 1; i < a; ++i) {
	    newnum = num1 + num2;
		num1 = num2;
		num2 = newnum;
	}
	std::cout << newnum << std::endl;
	return newnum;
}


int main()
{
	int a;
	std::cin >> a;
    Fibonachi(a);
	
}


