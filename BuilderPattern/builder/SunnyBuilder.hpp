//
// Created by AxLiupore on 2023/9/2.
//

#ifndef BUILDERMODEL_BUILDER_SUNNYBUILDER_HPP_
#define BUILDERMODEL_BUILDER_SUNNYBUILDER_HPP_

#include "ShipBuilder.hpp"
#include "../ship/SunnyShip.hpp"

class SunnyBuilder : public ShipBuilder
{
 public:
	SunnyBuilder()
	{
		reset();
	}

	void reset() override
	{
		m_sunny = new SunnyShip;
	}

	SunnyShip* getSunnyShip()
	{
		SunnyShip* ship = m_sunny;
		m_sunny = nullptr;
		return ship;
	}

	void buildBody() override
	{
		m_sunny->addParts("body is shenshu");
	}

	void buildWeapon() override
	{
		m_sunny->addParts("weapon is shihou");
	}

	void buildEngine() override
	{
		m_sunny->addParts("engine is coco");
	}

	void buildInterior() override
	{
		m_sunny->addParts("interior is luxury");
	}

	~SunnyBuilder()
	{
		if (m_sunny)
		{
			delete m_sunny;
		}
	}

 private:
	SunnyShip* m_sunny;
};

#endif //BUILDERMODEL_BUILDER_SUNNYBUILDER_HPP_
