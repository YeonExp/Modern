#include <iostream>
#include <map>
#include <vector>

int main()
{
	// typedef
	typedef std::map<const std::string&, std::vector<int>> MapVec;
	
	// using
	using MapVec2 = std::map<const std::string&, std::vector<int>>;

	// case 2 : function pointer
	// typedef
	typedef void(*fp)(int, const std::string&);
	using fp = void(*)(int, const std::string&);

	return 0;
}