#include <iostream>​
#include <string>​
#include <vector>​

struct Student
{
	int age; 
	int avg;
	std::string name;
};

std::vector <Student> vec;

bool Cmp_Age(const Student& s, int x) {
	return s.age == x;
}
bool Cmp_Avg(const Student& s, int x) {
	return s.avg == x;
}
bool Cmp_Name(const Student& s, std::string x) {
	return s.name == x;
}

template <typename Iter, typename Type, typename T>
Iter find(Iter begin, Iter end, T key, bool(*cmp_ptr)(Type, T)) {
	for (; Iter begin != Iter end; ++Iter) {
		if (cmp_ptr(*begin, key))
			return Iter;
	}
	return end;
}
int main()
{
	
}