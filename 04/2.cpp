#include <iostream>
#include <memory>
#include <deque>

template<typename Container, class Index>
decltype(auto) authAndAccess(Container& c, Index i)
{
	return c[i];
}

std::deque<int> CustomDeque()
{
	std::deque<int> temp;
	temp.resize(10);

	int count = 0;
	for (auto& value : temp)
		value = count++;

	return temp;
}

int main()
{
	std::deque<int> intDq;
	intDq.resize(10);

	authAndAccess(intDq, 5) = 10;
	std::cout << intDq.at(5) << std::endl;

	authAndAccess(CustomDeque(), 5) = 20;
	return 0;
}