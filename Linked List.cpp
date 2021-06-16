#include <iostream>

template <typename T>
struct list_node
{
	T data;
	list_node<T>* next;
};

template <typename T>
class List
{
public:
	void push_back(const T& data);
	void push_front(const T& data);
	void insert(const T& data, int pos);
	void print();
private:
	list_node <T>* m_head = nullptr;
};

template <typename T>
void List<T>:: push_back(const T& data) {
	list_node<T>* node = new list_node<T>;
	node->data = data;
	node->next = nullptr;
	if (!m_head) {
		m_head = node;
		return;
	}
	list_node<T>* cur = m_head;
	while (cur->next != nullptr) {
		cur = cur->next;
	}
	cur->next = node;
}
template <typename T>
void List<T>::push_front(const T& data) {
	list_node<T>* node = new list_node<T>;
	node->data = data;
	if (!m_head) {
		m_head = node;
		node->next = nullptr;
		return;
	}
	node->next = m_head;
	m_head = node;
}
template <typename T>
void List<T>::insert(const T& data, int pos) {
	list_node<T>* node = new list_node<T>;
	node->data = data;

	list_node<T>* next;
	list_node<T>* prev;
	list_node<T>* cur = m_head;
	if (!m_head) {
		m_head = node;
		node->next = nullptr;
		return;
	}
	while (pos) {
		if (pos == 1)
		{
			prev = cur;
			next = prev->next;
			prev->next = node;
			node->next = next;
		}
		cur = cur->next;
		pos--;
	}
}
template <typename T>
void List<T>::print() 
{
	while (m_head != nullptr)
	{
		std::cout << m_head->data << std::endl;
		m_head = m_head->next;
	}
}
int main()
{
	List<int> m;
	m.push_back(5);
	m.push_back(7);
	m.push_front(10);
	m.insert(15, 5);
	m.print();
}