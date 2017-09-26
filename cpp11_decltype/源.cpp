#include <iostream>

template<typename T, typename U>
auto add(T x, U y) -> decltype(x + y);

int main()
{
	auto x = 1;
	auto y = 2.0;
	// �����Ƶ�x+y������
	decltype(x + y) z;
	std::cout << sizeof(z) << std::endl;

	std::cout << add((int)9, (float)10.5);
	system("pause");
	return 0;
}

// β��������
// ��ʹ���ǲ�֪������ʲô���ͣ�Ҳ������decltype����
// ������Ϊ����������decltype(x + y)ʱ��x��y��û�ж���
// ������auto�ؼ��ֽ��������ͺ���
template<typename T, typename U>
auto add(T x, U y) -> decltype(x+y)
{
	return x + y;
}