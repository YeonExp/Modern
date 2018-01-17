#include <iostream>
#include <vector>
#include <string>

typedef struct node
{
	int key;
	std::string data;
};

void show(std::vector<node> nodes)
{
	for (int i = 0; i < nodes.size(); i++)
	{
		std::cout << (i + 1) << " Node, Key = " 
			<< nodes[i].key << ", Data = " << nodes[i].data << std::endl;
	}
}

int main()
{
	std::vector<node> nodes;

	std::cout << "<Input Data>" << std::endl;
	struct node temp;

	temp.key = 1;
	temp.data = "Hello World!";
	nodes.push_back(temp);

	temp.key = 2;
	temp.data = "Hello World2!";
	nodes.push_back(temp);

	temp.key = 3;
	temp.data = "Hello!!";
	nodes.push_back(temp);

	show(nodes);

	std::cout << "<Erase data>" << std::endl;
	nodes.erase(nodes.begin() + 1);

	show(nodes);

	temp.key = 2;
	temp.data = "Hello World2!";
	nodes.insert(nodes.begin() + 1, temp);

	show(nodes);

	nodes.pop_back();
	show(nodes);

	temp.key = 3;
	temp.data = "Hello!!";

	nodes.push_back(temp);
	show(nodes);

	return 0;
}