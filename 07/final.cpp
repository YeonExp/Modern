#include <iostream>
#include <memory>

class Base
{
public:
	virtual void normal_function() final {};
	virtual void virtual_function() {};
};

class Derived : public Base
{
public:
	// virtual void normal_function() { };
	virtual void virtual_function() override {};
};

int main()
{
	return 0;
}