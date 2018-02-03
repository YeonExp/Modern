#include <iostream>
#include <boost/type_index.hpp>

template<typename T>
void f(const T& param)
{
	using std::cout;
	using boost::typeindex::type_id_with_cvr;

	cout << "T = "
		<< type_id_with_cvr<T>().pretty_name()
		<< std::endl;

	cout << "param = "
		<< type_id_with_cvr<decltype(param)>().pretty_name()
		<< std::endl;
}
int main()
{
	const int& data = 10;

	f(data);
	return 0;
}