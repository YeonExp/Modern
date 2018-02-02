#include <iostream>
#include <memory>

template<typename T>
void r(std::initializer_list<T> param)
{
}

auto createInitList()
{
	return{ 1, 2, 3 };
}

int main()
{
	auto x = { 11, 23, 9 };
	r(x);

	return 0;
}