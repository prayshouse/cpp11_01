#define LEN 10

// ����constexpr���εĺ�������������ȥ��֤��
// ��������ڱ������׶ξ���һ������
constexpr int fibonacci(const int n)
{
	return n == 1 || n == 2 ? 1 : fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int a[fibonacci(2)];
	int b[4 + 5];	// constexpr��Ч�����������
	return 0;
}