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
	// ������һ������ʹ���б��ʼ��
	Magic magic = { 1, 2, 3, 4, 5 };
	vector<int> vec = { 6, 7, 8, 9, 10 };

	for (auto &i : vec)
	{
		cout << i << endl;
	}

	// ��ʼ���б���Ϊ��ͨ�������β�
	initializer_list<int> list = { 14, 15, 16 };
	foo({ 11, 12, 13 });
	foo(list);

	// �ṩͳһ�ĳ�ʼ���﷨
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