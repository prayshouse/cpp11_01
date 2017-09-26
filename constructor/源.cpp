#include <iostream>
#include <vector>

using namespace std;

class Base {
public:
	int value1;
	int value2;
	Base() {
		value1 = 1;
	}
	Base(int value) : Base() {	// ί��Base()���캯��
		value2 = value;
	}
};

class SubClass : public Base {
public:
	using Base::Base;		// �̳й���
};

int main(void)
{
	Base b(2);
	cout << b.value1 << " " << b.value2 << endl;
	SubClass sb(2);
	cout << sb.value1 << " " << sb.value2 << endl;
	system("pause");
	return 0;
}