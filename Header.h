#include<iostream>
template <typename T>
struct Node {
	T x;
	Node<T> *next, *head;
};

template <typename T>
class stack {
public:
	void push(const T &value);
	//void push1(T&& value);
	void pop();
	 T& head() const;
private:
	Node<T> *h;
};

template <typename T>
void stack<T>::push(const T &value) {
	Node<T> *temp = new Node<T>;
	temp->x = value;
	temp->next = h;
	h=temp;
	}

template <typename T>
void stack<T>::pop() {
	Node<T> *pv = h;
	h = h->next;
	delete pv;
}
template<typename T>
T& stack <T>::head() const {
	return h->x;
}
