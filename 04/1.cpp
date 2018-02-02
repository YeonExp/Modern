#include <iostream>
#include <memory>
#include <deque>

template<typename Container, class Index>
auto authAndAccess(Container& c, Index i)
{
	return c[i];
}

int main()
{
	std::deque<int> intDq;
	intDq.resize(10);

	authAndAccess(intDq, 5) = 10;
	std::cout << intDq.at(5) << std::endl;
	return 0;
}