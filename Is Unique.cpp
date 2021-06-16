#include <iostream>
#include <string>

bool IsUnique(std::string str) {
	long table[4] = {};
	for (int i = 0; i < str.size(); ++i) {
		int pos = str[i];
		for (int j = 0; j < 4; ++j) {
			if (str[i] / 64 == j) {
				pos %= 64;
				if (table[j] & (1 << pos)) {
					return false;
				}
				else {
					table[j] = table[j] | (1 << pos);
				}
			}
		}
	}
	return true;
}

int main()
{
	std::string s;
	std::cout << "Write a string, please" << std::endl;
	getline(std::cin, s);
	std::cout<<IsUnique(s);
}