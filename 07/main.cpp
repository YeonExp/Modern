#include <iostream>
#include <memory>

class TestClass
{
public:
	TestClass();
private:
	TestClass(const TestClass& ts) = delete;
	const TestClass operator=(const TestClass& rhs) = delete;
};

TestClass::TestClass()
{
	std::cout << "TestClass()" << std::endl;
}

template <typename T>
class TemplateClass
{
public:
	TemplateClass();
	void pointer(T* ptr);
};

template<> void TemplateClass<void>::pointer(void *) = delete;
template<> void TemplateClass<char>::pointer(char *)
{
	std::cout << "Test" << std::endl;
}

template <typename T>
TemplateClass<T>::TemplateClass()
{
	std::cout << "TemplateClass()" << std::endl;
}
int main()
{
	std::tr1::shared_ptr<TemplateClass<void>> tc(new TemplateClass<void>());
	tc->pointer((void *)0);
	return 0;
}