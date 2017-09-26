#include <initializer_list>
#include <iostream>
#include <vector>
using namespace std;

class Magic {
private:

public:
	Magic(initializer_list<int> list) {
		for (auto &i : list)
		{
			cout << i << endl;
		}
	}
	~Magic() {}
};

struct A {
	int a;
	float b;
};

void foo(initializer_list<int> list);

int main()
{
	// 像数组一样可以使用列表初始化
	Magic magic = { 1, 2, 3, 4, 5 };
	vector<int> vec = { 6, 7, 8, 9, 10 };

	for (auto &i : vec)
	{
		cout << i << endl;
	}

	// 初始化列表作为普通函数的形参
	initializer_list<int> list = { 14, 15, 16 };
	foo({ 11, 12, 13 });
	foo(list);

	// 提供统一的初始化语法
	A a{ 1, 1.3 };

	system("pause");
	return 0;
}

void foo(initializer_list<int> list)
{
	for (auto &i : list)
	{
		cout << i << endl;
	}
}