#include <iostream>
void foo(char*);
void foo(int);

int main() {
	// NULL ������Ϊ(void*)0������foo(NULL)�����foo(int),
	// ��ˣ�Ӧ�þ���ʹ��nullptr
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