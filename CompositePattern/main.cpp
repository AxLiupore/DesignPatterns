#include <iostream>
#include <vector>
#include <string>
#include "team/AbstractTeam.hpp"
#include "team/LeafTeam.hpp"
#include "team/ManagerTeam.hpp"

void gameover(AbstractTeam* root)
{
	if (root == nullptr)
	{
		return;
	}
	if (root && root->hasChild())
	{
		ManagerTeam* team = dynamic_cast<ManagerTeam*>(root);
		std::list<AbstractTeam*> children = team->getChildren();
		for (const auto& item : children)
		{
			gameover(item);
		}
	}
	delete root;
}

void fighting()
{
	std::vector<std::string> nameList = {
		"俊美海贼团", "巴托俱乐部", "八宝水军", "艾迪欧海贼团",
		"咚塔塔海贼团", "巨兵海贼团", "约塔玛利亚大船团"
	};
	// 根节点
	auto* root = new ManagerTeam("草帽海贼团");
	for (int i = 0; i < nameList.size(); i++)
	{
		auto* child = new ManagerTeam(nameList[i]);
		root->addChild(child);
		if (i == nameList.size() - 1)
		{
			for (int j = 0; j < 9; j++)
			{
				auto* leaf = new LeafTeam("第" + std::to_string(j + 1) + "番队");
				child->addChild(leaf);
				leaf->fight();
				leaf->display();
			}
		}
		child->fight();
		child->display();
	}
	root->fight();
	root->display();
	std::cout << "====================================" << std::endl;
	gameover(root);
}

int main()
{
	fighting();
	return 0;
}
