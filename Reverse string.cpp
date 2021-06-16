#include <iostream>
#include <string>

void ReverseString(std::string str) {
	for (int i = 0; i < str.size()/2; ++i) {
		int tmp = str[i];
		str[i] = str[str.size() - 1 - i];
		str[str.size() - 1 - i] = tmp;
	}
	std::cout << str;
}

int main()
{
	std::string str;
	getline(std::cin, str);
	ReverseString(str);
}


