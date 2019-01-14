#include <iostream> 
#include "Header.h" 

int main() {
	stack<int> *st = new stack<int>;

	st->push(5);
	st->push(3);
	st->push(19);
	st->pop();

	std::cout << st->head() << std::endl;
	system("pause");
}
