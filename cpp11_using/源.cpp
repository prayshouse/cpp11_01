#include <iostream>
#include <vector>

using namespace std;

template <typename T, typename U>
class SuckType;

typedef int(*process1)(void*);		// 定义了一个返回类型为int,参数为void*的函数指针类型，名字叫做process1
using process2 = void(*)(void*);	// 同上

// 为模板定义一个新名称
using NewType = SuckType<std::vector<int>, std::string>;


int main(void)
{

}