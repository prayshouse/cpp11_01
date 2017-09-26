#include <iostream>
void foo(char*);
void foo(int);

int main() {
	// NULL 被定义为(void*)0，所以foo(NULL)会调用foo(int),
	// 因此，应该尽量使用nullptr
	if (NULL == (void*)0) std::cout << "NULL == 0" << std::endl;
	else std::cout << "NULL != 0" << std::endl;
	foo(0);
	foo(NULL);
	foo(nullptr);
	system("pause");
	return 0;
}
void foo(char *ch) {
	std::cout << "call foo(char*)" << std::endl;
}
void foo(int i) {
	std::cout << "call foo(int)" << std::endl;
}