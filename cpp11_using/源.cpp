#include <iostream>
#include <vector>

using namespace std;

template <typename T, typename U>
class SuckType;

typedef int(*process1)(void*);		// ������һ����������Ϊint,����Ϊvoid*�ĺ���ָ�����ͣ����ֽ���process1
using process2 = void(*)(void*);	// ͬ��

// Ϊģ�嶨��һ��������
using NewType = SuckType<std::vector<int>, std::string>;


int main(void)
{

}