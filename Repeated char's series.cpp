#include <iostream>
#include <string>

void RepeatedChar(std::string str) {
	int max = 1;
	int count = 1;
	char ch;
	for (int i = 0; i < str.size(); ++i) {
			if (str[i] != str[i+1]) {
				count = 1;
				continue;
			}
			++count;
			if (max < count) {
				max = count;
				ch = str[i];
			}
    }
	for (int i = 0; i < max; ++i) {
		std::cout << ch;
	}

}
		

int main()
{
	std::string str;
	getline(std::cin, str);
	RepeatedChar(str);
}



