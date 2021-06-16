#include <iostream>
#include <string>

bool CheckPermutation(std::string str1, std::string str2) {
	if (str1.size() != str2.size())
	return false;
	bool arr1[256] = {0};
	bool arr2[256] = {0};
	for (int i = 0; i < str1.size(); ++i) {
		int pos1 = str1[i];
		arr1[pos1] = 1;
		int pos2 = str2[i];
		arr2[pos2] = 1;
	}
	for (int i = 0; i < 256; ++i) {
		if (arr1[i] != arr2[i])
		return false;
	}
	return true;
}

int main()
{
	std::string a;
	std::string b;
	std::cout << "Write 2 strings, please" << std::endl;
	getline(std::cin, a);
	getline(std::cin, b);
	std::cout << CheckPermutation(a, b);
}