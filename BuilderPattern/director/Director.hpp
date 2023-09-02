//
// Created by AxLiupore on 2023/9/2.
//

#ifndef BUILDERMODEL_MANAGER_MANAGER_HPP_
#define BUILDERMODEL_MANAGER_MANAGER_HPP_

#include "../builder/ShipBuilder.hpp"

class Director
{
 public:
	void setBuilder(ShipBuilder* builder)
	{
		m_builder = builder;
	}

	// simple
	void buildSimpleShip()
	{
		m_builder->buildBody();
		m_builder->buildEngine();
	}

	// standard
	void buildStandardShip()
	{
		buildSimpleShip();
		m_builder->buildWeapon();
	}

	// regal
	void buildRegalShip()
	{
		buildStandardShip();
		m_builder->buildInterior();
	}

 private:
	ShipBuilder* m_builder = nullptr;
};

#endif //BUILDERMODEL_MANAGER_MANAGER_HPP_
