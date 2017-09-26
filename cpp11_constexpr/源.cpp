#define LEN 10

// 经过constexpr修饰的函数，编译器会去验证，
// 这个函数在编译器阶段就是一个常数
constexpr int fibonacci(const int n)
{
	return n == 1 || n == 2 ? 1 : fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int a[fibonacci(2)];
	int b[4 + 5];	// constexpr的效果与这个类似
	return 0;
}