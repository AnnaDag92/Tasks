#include <iostream>
#include <string>


void FindNumbers(std::string str) {
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] >= 48 && str[i] <= 57)
			std::cout << str[i] << std::endl;
	}
}

int main()
{
	std::string str;
	getline(std::cin, str);
	FindNumbers(str);
}