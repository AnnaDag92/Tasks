#include <iostream>

class vector
{
public:
	vector();
	void push_back(const int& elem);
	void assign(int newsize,const int & value);
	void pop_back();
	void insert(int index, int n, const int& value);
	void erase(int index1, int index2);
	void erase_one_elem(int index);
	void swap(vector& a);
	void emplace(int index, int value);
	void emplace_back(int value);
	~vector();
	int getsize();
	int getcap();
	int& operator[](int index);
private:
	int m_size;
	int m_cap;
	int* m_arr;
};
vector::vector() : m_size{ 0 }, m_cap{ 2 }, m_arr{ new int[m_cap] }{ }
vector::~vector() { delete[] m_arr; }
void vector::push_back(const int& elem) {
	if (m_size == m_cap) {
		m_cap *= 2;
		int* tmp = new int[m_cap];
		for (int ix = 0; ix < m_size; ++ix)
			tmp[ix] = m_arr[ix];
		delete[] m_arr;
		m_arr = tmp;
	}
	m_arr[m_size++] = elem;
}
void vector::assign(int newsize, const int & value) {
	if (newsize > m_cap) {
		m_cap = newsize;
		int* tmp = new int[m_cap];
		for (int i = 0; i < m_cap; ++i) {
			tmp[i] = value;
			delete[] m_arr;
			m_arr = tmp;
		}
	}
		for (int i = 0; i < newsize; ++i) {
			m_arr[i] = value;
		}
}
void vector::pop_back() {
	--m_size;
}
void vector::insert(int index, int n, const int& value) {
	if (m_size + n > m_cap) {
		m_cap = m_size + n;
		int* tmp = new int[m_cap];
		for (int i = 0; i < index; ++i) {
			tmp[i] = m_arr[i];
		}
		for (int i = index; i < index + n; ++i) {
			tmp[i] = value;
			++m_size;
		}
		for (int i = index + n, j = index; i < m_cap; ++i, ++j) {
			tmp[i] = m_arr[j];
		}
		delete[] m_arr;
		m_arr = tmp;
	}
	for (int i = index; i < index + n; ++i) {
		m_arr[i] = value;
	}
	for (int j = m_size - 1, i = m_cap - 1; j > index; --i, --j) {
		m_arr[i] = m_arr[j];
	}
}
void vector::erase(int index1, int index2) {
	for (int i = index1, j = index2 + 1; i < m_size - 1; ++i, ++j) {
		m_arr[i] = m_arr[j];
	}
	m_size -= index2 - index1 + 1;
}
void vector::erase_one_elem(int index) {
	for (int i = index; i < m_size - 1; ++i) {
		m_arr[i] = m_arr[i + 1];
	}
	--m_size;
}
void vector::swap(vector& a) {
		int* tmp = new int[m_cap];
		for (int i = 0; i < m_size; ++i) {
			tmp[i] = a.m_arr[i];
		}
		for (int i = 0; i < m_size; ++i) {
			a.m_arr[i] = m_arr[i];
		}
		for (int i = 0; i < m_size; ++i) {
			m_arr[i] = tmp[i];
		}
}
void vector::emplace(int index, int value) {
	if (m_size + 1 > m_cap) {
		m_cap += 1;
		int* tmp = new int[m_cap];
		for (int i = 0; i < index; ++i) {
			tmp[i] = m_arr[i];
		}
		tmp[index] = value;
		for (int i = index + 1; i < m_cap; ++i) {
			tmp[i] = m_arr[i - 1];
		}
		delete[] m_arr;
		m_arr = tmp;
		++m_size;
	}
	for (int i = index + 1; i < m_cap; ++i) {
		m_arr[i] = m_arr[i - 1];
	}
	m_arr[index] = value;
	++m_size;
}
void vector::emplace_back(int value) {
	if (m_size + 1 > m_cap) {
		m_cap += 1;
		int* tmp = new int[m_cap];
		for (int i = 0; i < m_cap-1; ++i) {
			tmp[i] = m_arr[i];
		}
		tmp[m_cap-1] = value;
		delete[] m_arr;
		m_arr = tmp;
		++m_size;
	}
	m_arr[m_cap-1] = value;
	++m_size;
}
int vector::getsize() {
	return m_size;
}
int vector::getcap() {
	return m_cap;
}
int& vector::operator[](int index) {
	return m_arr[index];
}



int main()
{
	vector vec;
	vec.push_back(200);
	vec.push_back(200);
	vec.push_back(200);
	
	/*for (int i = 0; i < vec.getsize(); ++i) {
		std::cout << vec[i] << std::endl;
	}
	vec.assign(2, 100);
	for (int i = 0; i < vec.getsize(); ++i) {
		std::cout << vec[i] << std::endl;
	}
	vec.pop_back();
	for (int i = 0; i < vec.getsize(); ++i) {
		std::cout << vec[i] << std::endl;
	}
	vec.insert(1, 4, 500);
	for (int i = 0; i < vec.getsize(); ++i) {
		std::cout << vec[i] << std::endl;
	}
	vec.erase_one_elem(2);
	for (int i = 0; i < vec.getsize(); ++i) {
		std::cout << vec[i] << std::endl;
	}
	vec.erase(2,5);
	for (int i = 0; i < vec.getsize(); ++i) {
		std::cout << vec[i] << std::endl;
	}*/
	vec.emplace_back( 5);
	for (int i = 0; i < vec.getsize(); ++i) {
		std::cout << vec[i] << std::endl;
	}
}
