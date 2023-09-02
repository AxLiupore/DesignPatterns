//
// Created by AxLiupore on 2023/9/2.
//

#ifndef BUILDERMODEL_BUILDER_MERRYBUILDER_HPP_
#define BUILDERMODEL_BUILDER_MERRYBUILDER_HPP_

#include "ShipBuilder.hpp"
#include "../ship/MerryShip.hpp"

class MerryBuilder : public ShipBuilder
{
 public:
	MerryBuilder()
	{
		reset();
	}

	void reset() override
	{
		m_merry = new MerryShip;
	}

	MerryShip* getMerryShip()
	{
		MerryShip* ship = m_merry;
		m_merry = nullptr;
		return ship;
	}

	void buildBody() override
	{
		m_merry->assemble("body is shenshu", "body");
	}

	void buildWeapon() override
	{
		m_merry->assemble("weapon is shihou", "weapon");
	}

	void buildEngine() override
	{
		m_merry->assemble("engine is coco", "engine");
	}

	void buildInterior() override
	{
		m_merry->assemble("interior is luxury", "interior");
	}

	~MerryBuilder()
	{
		if (m_merry)
		{
			delete m_merry;
		}
	}

 private:
	MerryShip* m_merry;
};

#endif //BUILDERMODEL_BUILDER_MERRYBUILDER_HPP_
