#include <iostream>

int Fibonachi(int a) {
	if (a < 0)
		return -1;
	if (a==0 || a==1)
		return a;
      return (Fibonachi(a - 1) + Fibonachi(a - 2));
}


int main()
{
	int a;
	std::cin >> a;
	std::cout<<Fibonachi(a);
}


