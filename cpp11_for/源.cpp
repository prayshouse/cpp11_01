#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	// ���ڷ�Χ��forѭ������
	int arr[] = { 0, 1, 2, 3, 4 };
	for (auto &x : arr)
	{
		cout << x << endl;
	}

	// ���ڷ�Χ��forѭ��vector����
	vector<int> v(5, 100);
	// ���������ã����û�����vec�е�Ԫ��ֻ�ܶ�ȡ�������޸�
	for (auto &i : v)
	{
		cout << i << endl;
	}

	system("pause");
	return 0;
}