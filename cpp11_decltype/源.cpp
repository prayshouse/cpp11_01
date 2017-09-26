#include <iostream>

template<typename T, typename U>
auto add(T x, U y) -> decltype(x + y);

int main()
{
	auto x = 1;
	auto y = 2.0;
	// 用来推导x+y的类型
	decltype(x + y) z;
	std::cout << sizeof(z) << std::endl;

	std::cout << add((int)9, (float)10.5);
	system("pause");
	return 0;
}

// 尾返回类型
// 即使我们不知道返回什么类型，也可以用decltype返回
// 但是因为编译器读到decltype(x + y)时，x和y还没有定义
// 所以用auto关键字将返回类型后置
template<typename T, typename U>
auto add(T x, U y) -> decltype(x+y)
{
	return x + y;
}