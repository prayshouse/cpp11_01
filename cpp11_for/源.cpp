#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	// 基于范围的for循环遍历
	int arr[] = { 0, 1, 2, 3, 4 };
	for (auto &x : arr)
	{
		cout << x << endl;
	}

	// 基于范围的for循环vector遍历
	vector<int> v(5, 100);
	// 启用了引用，如果没有则对vec中的元素只能读取，不能修改
	for (auto &i : v)
	{
		cout << i << endl;
	}

	system("pause");
	return 0;
}