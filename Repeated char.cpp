#include <iostream>
#include <string>

void RepeatedChar(std::string str) {
	int count = 1;
	int max = 1;
	char ch;
	for (int i = 0; i < str.size(); ++i) {
		for (int j = 1, count = 0; j < str.size(); ++j) {
			if (str[i] == str[j]) {
				++count;
			}
			if (max < count) {
				max = count;
				ch = str[i];
			}
		}
	}
	std::cout << ch;
}
		

int main()
{
	std::string str;
	getline(std::cin, str);
	RepeatedChar(str);
}



