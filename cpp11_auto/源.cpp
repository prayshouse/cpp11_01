#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> vec;
	vec.clear();
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	for (vector<int>::const_iterator itr = vec.cbegin(); itr != vec.cend(); ++itr)
		cout << *itr << endl;

	// the same as
	for (auto itr = vec.cbegin(); itr != vec.cend(); ++itr)
		cout << *itr << endl;

	// some other ways
	auto i = 5;					// i => int 
	auto arr = new auto(10);	// arr => int*
	
	system("pause");
	return 0;
}